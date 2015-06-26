# Install script for directory: /home/rosbox/catkin_ws/src

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "/home/rosbox/catkin_ws/install")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "")
  ENDIF(BUILD_TYPE)
  MESSAGE(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
ENDIF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)

# Set the component getting installed.
IF(NOT CMAKE_INSTALL_COMPONENT)
  IF(COMPONENT)
    MESSAGE(STATUS "Install component: \"${COMPONENT}\"")
    SET(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  ELSE(COMPONENT)
    SET(CMAKE_INSTALL_COMPONENT)
  ENDIF(COMPONENT)
ENDIF(NOT CMAKE_INSTALL_COMPONENT)

# Install shared libraries without execute permission?
IF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  SET(CMAKE_INSTALL_SO_NO_EXE "1")
ENDIF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  
      if (NOT EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}")
        file(MAKE_DIRECTORY "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}")
      endif()
      if (NOT EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/.catkin")
        file(WRITE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/.catkin" "")
      endif()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CPACK_ABSOLUTE_DESTINATION_FILES
   "/home/rosbox/catkin_ws/install/_setup_util.py")
FILE(INSTALL DESTINATION "/home/rosbox/catkin_ws/install" TYPE PROGRAM FILES "/home/rosbox/catkin_ws/build/catkin_generated/installspace/_setup_util.py")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CPACK_ABSOLUTE_DESTINATION_FILES
   "/home/rosbox/catkin_ws/install/env.sh")
FILE(INSTALL DESTINATION "/home/rosbox/catkin_ws/install" TYPE PROGRAM FILES "/home/rosbox/catkin_ws/build/catkin_generated/installspace/env.sh")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CPACK_ABSOLUTE_DESTINATION_FILES
   "/home/rosbox/catkin_ws/install/setup.bash")
FILE(INSTALL DESTINATION "/home/rosbox/catkin_ws/install" TYPE FILE FILES "/home/rosbox/catkin_ws/build/catkin_generated/installspace/setup.bash")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CPACK_ABSOLUTE_DESTINATION_FILES
   "/home/rosbox/catkin_ws/install/setup.sh")
FILE(INSTALL DESTINATION "/home/rosbox/catkin_ws/install" TYPE FILE FILES "/home/rosbox/catkin_ws/build/catkin_generated/installspace/setup.sh")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CPACK_ABSOLUTE_DESTINATION_FILES
   "/home/rosbox/catkin_ws/install/setup.zsh")
FILE(INSTALL DESTINATION "/home/rosbox/catkin_ws/install" TYPE FILE FILES "/home/rosbox/catkin_ws/build/catkin_generated/installspace/setup.zsh")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CPACK_ABSOLUTE_DESTINATION_FILES
   "/home/rosbox/catkin_ws/install/.rosinstall")
FILE(INSTALL DESTINATION "/home/rosbox/catkin_ws/install" TYPE FILE FILES "/home/rosbox/catkin_ws/build/catkin_generated/installspace/.rosinstall")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/etc/catkin/profile.d" TYPE FILE FILES "/opt/ros/hydro/share/catkin/cmake/env-hooks/05.catkin_make.bash")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/etc/catkin/profile.d" TYPE FILE FILES "/opt/ros/hydro/share/catkin/cmake/env-hooks/05.catkin_make_isolated.bash")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  INCLUDE("/home/rosbox/catkin_ws/build/gtest/cmake_install.cmake")
  INCLUDE("/home/rosbox/catkin_ws/build/camera_umd/camera_umd/cmake_install.cmake")
  INCLUDE("/home/rosbox/catkin_ws/build/image_pipeline/image_pipeline/cmake_install.cmake")
  INCLUDE("/home/rosbox/catkin_ws/build/viso2_ros/libviso2/cmake_install.cmake")
  INCLUDE("/home/rosbox/catkin_ws/build/rosbridge/rosbridge_suite/rosbridge_suite/cmake_install.cmake")
  INCLUDE("/home/rosbox/catkin_ws/build/rosserial/rosserial/cmake_install.cmake")
  INCLUDE("/home/rosbox/catkin_ws/build/rosserial/rosserial_arduino/cmake_install.cmake")
  INCLUDE("/home/rosbox/catkin_ws/build/rosserial/rosserial_client/cmake_install.cmake")
  INCLUDE("/home/rosbox/catkin_ws/build/rosserial/rosserial_msgs/cmake_install.cmake")
  INCLUDE("/home/rosbox/catkin_ws/build/rosserial/rosserial_python/cmake_install.cmake")
  INCLUDE("/home/rosbox/catkin_ws/build/rosserial/rosserial_xbee/cmake_install.cmake")
  INCLUDE("/home/rosbox/catkin_ws/build/viso2_ros/viso2/cmake_install.cmake")
  INCLUDE("/home/rosbox/catkin_ws/build/depth_cam/cmake_install.cmake")
  INCLUDE("/home/rosbox/catkin_ws/build/ground_velocity/cmake_install.cmake")
  INCLUDE("/home/rosbox/catkin_ws/build/keyboard_teleop/cmake_install.cmake")
  INCLUDE("/home/rosbox/catkin_ws/build/luna_ping/cmake_install.cmake")
  INCLUDE("/home/rosbox/catkin_ws/build/ros_socket/cmake_install.cmake")
  INCLUDE("/home/rosbox/catkin_ws/build/image_pipeline/camera_calibration/cmake_install.cmake")
  INCLUDE("/home/rosbox/catkin_ws/build/image_pipeline/image_view/cmake_install.cmake")
  INCLUDE("/home/rosbox/catkin_ws/build/camera_umd/jpeg_streamer/cmake_install.cmake")
  INCLUDE("/home/rosbox/catkin_ws/build/image_pipeline/image_proc/cmake_install.cmake")
  INCLUDE("/home/rosbox/catkin_ws/build/rosbridge/rosbridge_suite/rosbridge_library/cmake_install.cmake")
  INCLUDE("/home/rosbox/catkin_ws/build/rosbridge/rosbridge_suite/rosapi/cmake_install.cmake")
  INCLUDE("/home/rosbox/catkin_ws/build/rosbridge/rosbridge_suite/rosbridge_server/cmake_install.cmake")
  INCLUDE("/home/rosbox/catkin_ws/build/rosserial/rosserial_server/cmake_install.cmake")
  INCLUDE("/home/rosbox/catkin_ws/build/image_pipeline/stereo_image_proc/cmake_install.cmake")
  INCLUDE("/home/rosbox/catkin_ws/build/lunatron_setup_tf/cmake_install.cmake")
  INCLUDE("/home/rosbox/catkin_ws/build/image_pipeline/depth_image_proc/cmake_install.cmake")
  INCLUDE("/home/rosbox/catkin_ws/build/rosserial/rosserial_embeddedlinux/cmake_install.cmake")
  INCLUDE("/home/rosbox/catkin_ws/build/rosserial/rosserial_windows/cmake_install.cmake")
  INCLUDE("/home/rosbox/catkin_ws/build/image_pipeline/image_rotate/cmake_install.cmake")
  INCLUDE("/home/rosbox/catkin_ws/build/camera_umd/uvc_camera/cmake_install.cmake")
  INCLUDE("/home/rosbox/catkin_ws/build/viso2_ros/viso2_ros/cmake_install.cmake")

ENDIF(NOT CMAKE_INSTALL_LOCAL_ONLY)

IF(CMAKE_INSTALL_COMPONENT)
  SET(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
ELSE(CMAKE_INSTALL_COMPONENT)
  SET(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
ENDIF(CMAKE_INSTALL_COMPONENT)

FILE(WRITE "/home/rosbox/catkin_ws/build/${CMAKE_INSTALL_MANIFEST}" "")
FOREACH(file ${CMAKE_INSTALL_MANIFEST_FILES})
  FILE(APPEND "/home/rosbox/catkin_ws/build/${CMAKE_INSTALL_MANIFEST}" "${file}\n")
ENDFOREACH(file)
