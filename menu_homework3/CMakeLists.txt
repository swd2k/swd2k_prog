cmake_minimum_required(VERSION 3.14)
project(menu_homework3 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(menu_homework3 
    main.cpp
    menu_functions.cpp
    menu_items.cpp
)
