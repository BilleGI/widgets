cmake_minimum_required(VERSION 3.22.1)

project("Widgets" VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)

set(MY_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)

find_package(Qt6 REQUIRED COMPONENTS Core Widgets)

add_subdirectory(src)

target_link_libraries(widgets PRIVATE Qt6::Widgets Qt6::Core)

set_target_properties(widgets PROPERTIES
    WIN32_EXECUTABLE ON
    MACOSX_BUNDLE ON
)

install(TARGETS widgets
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
