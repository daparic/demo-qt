cmake_minimum_required(VERSION 3.5)
project(AdderApp)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_AUTOMOC ON)

find_package(Qt5 REQUIRED COMPONENTS Widgets)

add_executable(AdderApp
    main.cpp
    adderdialog.cpp
    adderdialog.h
)

target_link_libraries(AdderApp Qt5::Widgets)

