cmake_minimum_required(VERSION 3.2...3.27.5)

project(swd2k_prog)

enable_testing()
add_subdirectory(lib/googletest)

add_subdirectory(insertion_sort)
add_subdirectory(menu_homework3)
add_subdirectory(unit_test_example)

set(CMAKE_SUPPRESS_REGENERATION true)
