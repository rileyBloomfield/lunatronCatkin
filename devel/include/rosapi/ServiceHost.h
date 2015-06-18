/* Software License Agreement (BSD License)
 *
 * Copyright (c) 2011, Willow Garage, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution.
 *  * Neither the name of Willow Garage, Inc. nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * Auto-generated by gensrv_cpp from file /home/rosbox/catkin_ws/src/rosbridge/rosbridge_suite/rosapi/srv/ServiceHost.srv
 *
 */


#ifndef ROSAPI_MESSAGE_SERVICEHOST_H
#define ROSAPI_MESSAGE_SERVICEHOST_H

#include <ros/service_traits.h>


#include <rosapi/ServiceHostRequest.h>
#include <rosapi/ServiceHostResponse.h>


namespace rosapi
{

struct ServiceHost
{

typedef ServiceHostRequest Request;
typedef ServiceHostResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct ServiceHost
} // namespace rosapi


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::rosapi::ServiceHost > {
  static const char* value()
  {
    return "a1b60006f8ee69637c856c94dd192f5a";
  }

  static const char* value(const ::rosapi::ServiceHost&) { return value(); }
};

template<>
struct DataType< ::rosapi::ServiceHost > {
  static const char* value()
  {
    return "rosapi/ServiceHost";
  }

  static const char* value(const ::rosapi::ServiceHost&) { return value(); }
};


// service_traits::MD5Sum< ::rosapi::ServiceHostRequest> should match 
// service_traits::MD5Sum< ::rosapi::ServiceHost > 
template<>
struct MD5Sum< ::rosapi::ServiceHostRequest>
{
  static const char* value()
  {
    return MD5Sum< ::rosapi::ServiceHost >::value();
  }
  static const char* value(const ::rosapi::ServiceHostRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::rosapi::ServiceHostRequest> should match 
// service_traits::DataType< ::rosapi::ServiceHost > 
template<>
struct DataType< ::rosapi::ServiceHostRequest>
{
  static const char* value()
  {
    return DataType< ::rosapi::ServiceHost >::value();
  }
  static const char* value(const ::rosapi::ServiceHostRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::rosapi::ServiceHostResponse> should match 
// service_traits::MD5Sum< ::rosapi::ServiceHost > 
template<>
struct MD5Sum< ::rosapi::ServiceHostResponse>
{
  static const char* value()
  {
    return MD5Sum< ::rosapi::ServiceHost >::value();
  }
  static const char* value(const ::rosapi::ServiceHostResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::rosapi::ServiceHostResponse> should match 
// service_traits::DataType< ::rosapi::ServiceHost > 
template<>
struct DataType< ::rosapi::ServiceHostResponse>
{
  static const char* value()
  {
    return DataType< ::rosapi::ServiceHost >::value();
  }
  static const char* value(const ::rosapi::ServiceHostResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROSAPI_MESSAGE_SERVICEHOST_H
