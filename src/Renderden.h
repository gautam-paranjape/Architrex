#pragma once
#define GL_SILENCE_DEPRECATION
#define GLFW_INCLUDE_NONE

#include <glad/gl.h>
#include <GLFW/glfw3.h>
#include <iostream>

//Renderden Namespace
namespace Renderden {

    //Main class
    class RenderdenEngine {
        public:
            int RenderdenInitFunction();
        //Private properties
        private:
            GLFWwindow* window;
            const int WIDTH = 640;
            const int HEIGHT = 480;
            const char* name = "Renderden Sandbox";
    }; 

} 