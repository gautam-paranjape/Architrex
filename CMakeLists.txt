cmake_minimum_required(VERSION 3.0.0)
project(Renderden VERSION 0.1.0)

include(CTest)
enable_testing()

# Build GLFW
set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

add_subdirectory("dependencies/glfw")

add_executable(Renderden src/main.cpp src/Renderden.cpp src/Renderden.h src/shapes/Triangle.cpp src/shapes/Triangle.h)

target_link_libraries(Renderden glfw glad)

# Compile GLAD
add_library(glad dependencies/glad/src/gl.c)
target_include_directories(glad PUBLIC dependencies/glad/include)

# Linmath setup

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
