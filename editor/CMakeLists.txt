# Editor list

add_executable(editor src/editor.cpp)
target_include_directories(editor PRIVATE include)
target_link_libraries(editor PRIVATE engine)