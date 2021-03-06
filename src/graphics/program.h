#ifndef PROGRAM_H
#define PROGRAM_H

#include <GL/glew.h>
#include <GLFW/glfw3.h>

#include <vector>
#include <string>
#include <fstream>
#include <streambuf>

#include "log.h"

class Program {
 public:
  Program();
  ~Program();
  void attach_shader(GLuint shader);
  void link();
  void bind();
  
  static GLuint load_shader(const char* path, GLenum type);
  static void delete_shader(GLuint shader);
  GLuint id;
};

#endif // PROGRAM_H
