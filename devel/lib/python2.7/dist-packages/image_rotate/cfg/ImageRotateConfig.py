## *********************************************************
## 
## File autogenerated for the image_rotate package 
## by the dynamic_reconfigure package.
## Please do not edit.
## 
## ********************************************************/

##**********************************************************
## Software License Agreement (BSD License)
##
##  Copyright (c) 2008, Willow Garage, Inc.
##  All rights reserved.
##
##  Redistribution and use in source and binary forms, with or without
##  modification, are permitted provided that the following conditions
##  are met:
##
##   * Redistributions of source code must retain the above copyright
##     notice, this list of conditions and the following disclaimer.
##   * Redistributions in binary form must reproduce the above
##     copyright notice, this list of conditions and the following
##     disclaimer in the documentation and/or other materials provided
##     with the distribution.
##   * Neither the name of the Willow Garage nor the names of its
##     contributors may be used to endorse or promote products derived
##     from this software without specific prior written permission.
##
##  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
##  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
##  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
##  FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
##  COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
##  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
##  BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
##  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
##  CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
##  LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
##  ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
##  POSSIBILITY OF SUCH DAMAGE.
##**********************************************************/

from dynamic_reconfigure.encoding import extract_params

inf = float('inf')

config_description = {'upper': 'DEFAULT', 'lower': 'groups', 'srcline': 233, 'name': 'Default', 'parent': 0, 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'cstate': 'true', 'parentname': 'Default', 'class': 'DEFAULT', 'field': 'default', 'state': True, 'parentclass': '', 'groups': [], 'parameters': [{'srcline': 262, 'description': 'Frame in which the target vector is specified. Empty means the input frame.', 'max': '', 'cconsttype': 'const char * const', 'ctype': 'std::string', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'target_frame_id', 'edit_method': '', 'default': 'base_link', 'level': 0, 'min': '', 'type': 'str'}, {'srcline': 262, 'description': 'X coordinate of the target vector', 'max': 10.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'target_x', 'edit_method': '', 'default': 0.0, 'level': 0, 'min': -10.0, 'type': 'double'}, {'srcline': 262, 'description': 'Y coordinate of the target vector', 'max': 10.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'target_y', 'edit_method': '', 'default': 0.0, 'level': 0, 'min': -10.0, 'type': 'double'}, {'srcline': 262, 'description': 'Z coordinate of the target vector', 'max': 10.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'target_z', 'edit_method': '', 'default': 1.0, 'level': 0, 'min': -10.0, 'type': 'double'}, {'srcline': 262, 'description': 'Frame in which the source vector is specified. Empty means the input frame.', 'max': '', 'cconsttype': 'const char * const', 'ctype': 'std::string', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'source_frame_id', 'edit_method': '', 'default': '', 'level': 0, 'min': '', 'type': 'str'}, {'srcline': 262, 'description': 'X coordinate of the direction the target should be aligned with.', 'max': 10.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'source_x', 'edit_method': '', 'default': 0.0, 'level': 0, 'min': -10.0, 'type': 'double'}, {'srcline': 262, 'description': 'Y coordinate of the direction the target should be aligned with.', 'max': 10.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'source_y', 'edit_method': '', 'default': -1.0, 'level': 0, 'min': -10.0, 'type': 'double'}, {'srcline': 262, 'description': 'Z coordinate of the direction the target should be aligned with.', 'max': 10.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'source_z', 'edit_method': '', 'default': 0.0, 'level': 0, 'min': -10.0, 'type': 'double'}, {'srcline': 262, 'description': "Frame to publish for the image's new orientation. Empty means add '_rotated' suffix to the image frame.", 'max': '', 'cconsttype': 'const char * const', 'ctype': 'std::string', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'output_frame_id', 'edit_method': '', 'default': '', 'level': 0, 'min': '', 'type': 'str'}, {'srcline': 262, 'description': 'Frame to use for the original camera image. Empty means that the frame in the image or camera_info should be used depending on use_camera_info.', 'max': '', 'cconsttype': 'const char * const', 'ctype': 'std::string', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'input_frame_id', 'edit_method': '', 'default': '', 'level': 0, 'min': '', 'type': 'str'}, {'srcline': 262, 'description': 'Indicates that the camera_info topic should be subscribed to to get the default input_frame_id. Otherwise the frame from the image message will be used.', 'max': True, 'cconsttype': 'const bool', 'ctype': 'bool', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'use_camera_info', 'edit_method': '', 'default': True, 'level': 0, 'min': False, 'type': 'bool'}, {'srcline': 262, 'description': 'Use tf2 to lookup transformation', 'max': True, 'cconsttype': 'const bool', 'ctype': 'bool', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'use_tf2', 'edit_method': '', 'default': False, 'level': 0, 'min': False, 'type': 'bool'}, {'srcline': 262, 'description': 'Limits the rate at which the image can rotate (rad/s). Zero means no limit.', 'max': 100.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'max_angular_rate', 'edit_method': '', 'default': 10.0, 'level': 0, 'min': 0.0, 'type': 'double'}, {'srcline': 262, 'description': 'Size of the output image as a function of the input image size. Can be varied continuously between the following special settings: 0 ensures no black ever appears, 1 is small image dimension, 2 is large image dimension, 3 is image diagonal.', 'max': 3.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/hydro/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'output_image_size', 'edit_method': '', 'default': 2.0, 'level': 0, 'min': 0.0, 'type': 'double'}], 'type': '', 'id': 0}

min = {}
max = {}
defaults = {}
level = {}
type = {}
all_level = 0

#def extract_params(config):
#    params = []
#    params.extend(config['parameters'])    
#    for group in config['groups']:
#        params.extend(extract_params(group))
#    return params

for param in extract_params(config_description):
    min[param['name']] = param['min']
    max[param['name']] = param['max']
    defaults[param['name']] = param['default']
    level[param['name']] = param['level']
    type[param['name']] = param['type']
    all_level = all_level | param['level']

