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
            int RenderdenInitFunction() {
                //Initialize GLFW
                if (!glfwInit()) {
                    std::cout << "Failed to initialize GLFW window" << std::endl;
                    return -1;
                }

                window = glfwCreateWindow(WIDTH, HEIGHT, name, NULL, NULL);

                //Initialize and configure
                glfwInit();
                glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
                glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
                glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

                //Check for window errors
                if (window == NULL) {
                    std::cout << "Window is nonexistent" << std::endl;
                    glfwTerminate();
                    return -1;
                }

                //Create a current OpenGL context
                glfwMakeContextCurrent(window);

                //GLAD - initialize and configure
                if (!gladLoadGL(glfwGetProcAddress)) {
                    std::cout << "Failed to initialize GLAD" << std::endl;
                    return -1;
                }

                //Main render loop, called once per frame
                while (!glfwWindowShouldClose(window)) {
                    glClear(GL_COLOR_BUFFER_BIT);

                    //Swap the back and front buffers;
                    glfwSwapBuffers(window);
                    glfwPollEvents(); //Poll for process events
                }

                //After the render loop is exited from, terminate and return a status code of 0.
                glfwTerminate();
                return 0;
            }   
        
        //Private properties
        private:
            GLFWwindow* window;
            const int WIDTH = 640;
            const int HEIGHT = 480;
            const char* name = "Renderden Sandbox";
    };

}