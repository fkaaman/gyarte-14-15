#ifndef MCL_H
#define MCL_H

#include <OpenCL/opencl.h>
//#include <OpenCL/cl_gl.h>
//#include <OpenCL/cl_gl_ext.h>

#include <OpenGL/CGLCurrent.h>

#include "log.h"

class MCL {
 public:
  static const cl_int device() { return compute_id; }
  static const cl_device_id device_id() { return compute_device_id; }
  static const cl_context device_context() { return compute_context; }
  static const cl_device_type device_type() { return compute_type; }
  static const cl_command_queue device_queue() { return compute_queue; }

  static bool init(bool use_gpu);
  static void destroy();
 private:
  MCL();
  ~MCL();

  static cl_int compute_id;
  static cl_device_id compute_device_id;
  static cl_context compute_context;
  static cl_device_type compute_type;
  static cl_command_queue compute_queue;
};

#endif // MCL_H