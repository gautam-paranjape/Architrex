add_executable(Renderden src/main.cpp)

target_link_libraries(Renderden glfw glad)
target_include_directories(Renderden PRIVATE ${LINMATH_INCLUDE_DIR})
