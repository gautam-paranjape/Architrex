#define GL_SILENCE_DEPRECATION
#define GLFW_INCLUDE_NONE

#include <stdio.h>
#include <iostream>
#include <vector>

#include "../Renderden/src/shapes/Shape.h"

int Renderden::Shape::drawCall(std::vector<int> VertexArray)
{
    std::cout << "Draw call called" << std::endl;
    // std::cout << this.name;
    return 1;
}
