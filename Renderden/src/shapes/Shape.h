#define GL_SILENCE_DEPRECATION
#define GLFW_INCLUDE_NONE

#include <stdio.h>
#include <iostream>
#include <vector>

namespace Renderden
{
    class Shape
    {
    public:
        int drawCall(std::vector<int> VertexArray);
    };
}