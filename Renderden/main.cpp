#define GL_SILENCE_DEPRECATION
#define GL_INCLUDE_NONE

#include <glad/gl.h>
#include <GLFW/glfw3.h>
#include <iostream>

int WIDTH = 800;
int HEIGHT = 600;

const char* NAME = "Renderden editor";

int main() {
    GLFWwindow* window;
    
    //Check if GLFW failed 
    if (!glfwInit()) {
        std::cout << "Failed to initialize GLFW window";
        return -1;
    }
    
    //Initialize and configure
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    
    #ifdef __APPLE__
        glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
    #endif

    //Create window
    window = glfwCreateWindow(WIDTH, HEIGHT, NAME, NULL, NULL);

    //Make the window in a current OpenGL context
    glfwMakeContextCurrent(window);

    //Initialize GLAD
    if (!gladLoadGL(glfwGetProcAddress)) {
        std::cout << "Failed to initialize GLAD" << std::endl;
        return -1;
    }    

    //Render loop, everything here is called once per frame
    while (!glfwWindowShouldClose(window)) {
        glClear(GL_COLOR_BUFFER_BIT);
        
        //Swap buffers front and back
        glfwSwapBuffers(window);
        glfwPollEvents(); //Poll for process events
    }

    //After the Render loop is exited from, terminate, and return a status code of 0.
    glfwTerminate();
    return 0;
}