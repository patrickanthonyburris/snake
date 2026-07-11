cmake_minimum_required(VERSION 4.2.3)

project(snake)

add_executable(snake main.cpp snake.cpp game.cpp space.cpp)

target_link_libraries(snake PRIVATE raylib GL m pthread dl rt X11)
