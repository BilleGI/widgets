cmake_minimum_required(VERSION 3.22.1)

add_executable(widgets main.cpp ${MY_INCLUDE_DIR}/circle.h circle.cpp)

target_include_directories(widgets PRIVATE ${MY_INCLUDE_DIR})
