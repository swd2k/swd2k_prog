cmake_minimum_required(VERSION 3.14)
project(SWD2K_Project LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

enable_testing()
add_subdirectory(third_party/googletest)

add_subdirectory(insertion_sort)
add_subdirectory(menu_homework3)
