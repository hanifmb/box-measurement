# generated from
# rosidl_cmake/cmake/template/rosidl_cmake_export_typesupport_targets.cmake.in

set(_exported_typesupport_targets
  "__rosidl_typesupport_introspection_c:box_measurement_srv__rosidl_typesupport_introspection_c;__rosidl_typesupport_introspection_cpp:box_measurement_srv__rosidl_typesupport_introspection_cpp")

# populate box_measurement_srv_TARGETS_<suffix>
if(NOT _exported_typesupport_targets STREQUAL "")
  # loop over typesupport targets
  foreach(_tuple ${_exported_typesupport_targets})
    string(REPLACE ":" ";" _tuple "${_tuple}")
    list(GET _tuple 0 _suffix)
    list(GET _tuple 1 _target)

    set(_target "box_measurement_srv::${_target}")
    if(NOT TARGET "${_target}")
      # the exported target must exist
      message(WARNING "Package 'box_measurement_srv' exports the typesupport target '${_target}' which doesn't exist")
    else()
      list(APPEND box_measurement_srv_TARGETS${_suffix} "${_target}")
    endif()
  endforeach()
endif()
