#define GL_SILENCE_DEPRECATION
#define GLFW_INCLUDE_NONE


#include <GLFW/glfw3.h>

#include "../Renderden.cpp"
#include <stdio.h>
#include <iostream>

using namespace Renderden;

class Triangle: public RenderdenEngine {
    public:
        //Triangle draw call
        int triangleDrawCall() {
            vertexShader = glCreateShader(GL_VERTEX_SHADER);
        }
    private: 
        unsigned int vertexShader;
};  