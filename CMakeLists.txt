cmake_minimum_required(VERSION 3.0.0)
project(Renderden VERSION 0.1.0)

include(CTest)
enable_testing()

# Build GLFW
set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

add_subdirectory("dependencies/glfw")

# Compile GLAD
add_library(glad dependencies/glad/src/gl.c)
target_include_directories(glad PUBLIC dependencies/glad/include)

# Linmath setup
set(LINMATH_INCLUDE_DIR "${CMAKE_SOURCE_DIR}/dependencies/linmath")

# Specify project directory
add_subdirectory("Renderden")

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
