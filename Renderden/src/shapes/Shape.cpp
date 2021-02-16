#define GL_SILENCE_DEPRECATION
#define GLFW_INCLUDE_NONE

#include "../Renderden.cpp"
#include <stdio.h>
#include <iostream>
#include <vector>
#include "../shaders/Shader.h"

using namespace Renderden;

class Shape: public RenderdenEngine {
    public:
        int drawCall(std::vector<int> VertexArray) { 
            std::cout << "Draw call called" << std::endl;
        }
};

