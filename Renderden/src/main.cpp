#define GL_SILENCE_DEPRECATION
#define GLFW_INCLUDE_NONE
#include <glad/gl.h>
#include <GLFW/glfw3.h>
#include <iostream>

//Properties
const int WIDTH = 640;
const int HEIGHT = 480;
const char *name = "Renderden";

int main() {
    //Create an instance of the GLFWwindow class, and create a window with its OpenGL context
    //Set parameters
    GLFWwindow* window = glfwCreateWindow(WIDTH, HEIGHT, name, NULL, NULL);

    //Initialize and configure
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    //Glad and Glfw initialization error handling
    if (!glfwInit()) {
        std::cout << "Failed to initialize GLFW" << std::endl;
        return -1;
    } 

    //Check if the window does not exist
    if (!window) {
        glfwTerminate();
        return -1;
    }

    //Check for failure of GLFW window creation
    if (window == NULL)
    {
        std::cout << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        return -1;
    }
    
    //Make the OpenGL window context current
    glfwMakeContextCurrent(window);

    if (!gladLoadGL((glfwGetProcAddress))) {
        std::cout << "Failed to initialize GLAD" << std::endl;
        return -1;
    }

    //Loop every frame and render something, until the user closes the window;
    while (!glfwWindowShouldClose(window)) {
        glClear(GL_COLOR_BUFFER_BIT);

        //Render objects, called per frame;
        //Swap back and front buffers
        glfwSwapBuffers(window);
        glfwPollEvents(); //Poll for process events
    }
}