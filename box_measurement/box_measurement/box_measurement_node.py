import rclpy
import numpy as np
from rclpy.node import Node
from std_msgs.msg import String
from sensor_msgs.msg import LaserScan
from example_interfaces.srv import SetBool
from box_measurement_srv.srv import BoxDimensions
from box_measurement import box_edges_detection

class MyNode(Node):
    def __init__(self):
        super().__init__('my_node')
        self.subscriber1 = self.create_subscription(
            LaserScan,
            'horizontal/scan',
            self.callback1,
            10  # QoS profile depth
        )

        self.subscriber2 = self.create_subscription(
            LaserScan,
            'vertical/scan',
            self.callback2,
            10  # QoS profile depth
        )

        self.service2 = self.create_service(
            BoxDimensions,
            'box_measurement/get_box_size',
            self.get_box_size
        )

        self.service1 = self.create_service(
            SetBool,
            'box_measurement/calibrate',
            self.calibrate
        )

        self.horizontal_ranges = []
        self.vertical_ranges = []

    def callback1(self, msg):
        self.horizontal_ranges = msg.ranges

    def callback2(self, msg):
        self.vertical_ranges = msg.ranges

    def calibrate(self, request, response):
        self.get_logger().info('Received service request: %s' % request.data)
        # Do something with the request and generate a response
        response.success = True
        response.message = 'Toggle service executed successfully'
        return response

    def get_box_size(self, request, response):
        self.get_logger().info('Received service request')

        if self.horizontal_ranges and self.vertical_ranges:	

            points_h = np.array(self.horizontal_ranges)
            points_v = np.array(self.vertical_ranges)

            SCAN_RANGE = {
                "ANGLE_V": (130, 160),
                "ANGLE_H": (170, 210),
                "DIST_V": 2,
                "DIST_H": 2,
            }

            mask_h = (
                np.absolute(points_h) < SCAN_RANGE["DIST_H"]
            )
            mask_v = (
                np.absolute(points_v) < SCAN_RANGE["DIST_V"]
            )

            points_filt_h = points_h[mask_h]
            points_filt_v = points_v[mask_v]

            print(points_filt_h)
            return response
            
            points_cartesian_h = polar_to_cartesian(points_filt_h)
            points_cartesian_v = polar_to_cartesian(points_filt_v)

            if points_filt_h.size < 8:
                print(f"The number of input points are too small: {points_filtered.size}")
                return

            detected_lines_h = sequential_ransac_multi_line_detection(
                points_cartesian_h,
                threshold=args.threshold,
                min_points=2,
                max_iterations=args.iter,
                max_lines=3,
                visualize=True,
                subwindow=1,
            )

            detected_lines_v = sequential_ransac_multi_line_detection(
                points_cartesian_v,
                threshold=args.threshold,
                min_points=2,
                max_iterations=args.iter,
                max_lines=3,
                visualize=True,
                subwindow=2,
            )

            # find the line pair denoting the two edges of the box
            line_pair_h = find_connected_line_pair(detected_lines_h)
            line_pair_v = find_connected_line_pair(detected_lines_v)

            l, w, h = calc_box_size(line_pair_h, line_pair_v)
            #print(f"w: {w/10} cm, l: {l/10} cm, h: {h/10} cm")
            response.width = w
            response.height = h
            response.length = l

        return response

def main(args=None):
    rclpy.init(args=args)
    node = MyNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
