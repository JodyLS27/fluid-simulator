# Used mark this as a static library
add_library(engine STATIC src/engine.cpp)

target_include_directories(engine PRIVATE include)

# Additional CMake scripts, Add 
include(cmake/FetchSFML.cmake)
target_link_libraries(engine PRIVATE sfml-graphics)

add_subdirectory(src)