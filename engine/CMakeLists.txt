# Engine CMake Lists

# Used mark this as a static library
add_library(engine STATIC src/engine.cpp)

target_include_directories(engine PRIVATE include)

# Additional CMake scripts, Add External Libraries 
include(cmake/FetchGLFW.cmake)
target_link_libraries(engine PRIVATE glfw)

add_subdirectory(src)