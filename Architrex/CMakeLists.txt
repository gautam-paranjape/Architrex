add_executable(Architrex src/main.cpp)

target_link_libraries(Architrex glfw glad)
target_include_directories(Architrex PRIVATE ${LINMATH_INCLUDE_DIR})
