#define GL_SILENCE_DEPRECATION
#define GLFW_INCLUDE_NONE

#include <glad/gl.h>
#include <GLFW/glfw3.h>

#include "../Renderden.cpp"
#include <stdio.h>
#include <iostream>

using namespace Renderden;

class Triangle: public RenderdenEngine {
    public:
        //Triangle draw call
        int triangleDrawCall(); 
    private:
        unsigned int vertexShader;
};  