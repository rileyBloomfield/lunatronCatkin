execute_process(COMMAND "/home/rosbox/catkin_ws/build/rosbridge/rosbridge_suite/rosapi/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/rosbox/catkin_ws/build/rosbridge/rosbridge_suite/rosapi/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
