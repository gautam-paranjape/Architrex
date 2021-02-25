#define GL_SILENCE_DEPRECATION
#define GLFW_INCLUDE_NONE

#include <glad/gl.h>
#include <GLFW/glfw3.h>

#include "../Renderden.cpp"
#include <stdio.h>
#include <iostream>
#include "Triangle.h"

using namespace Renderden;

int Triangle::triangleDrawCall()
{
    vertexShader = glCreateShader(GL_VERTEX_SHADER); // do you not have autosave?
}
