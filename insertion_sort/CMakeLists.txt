cmake_minimum_required(VERSION 3.14)
project(insertion_sort LANGUAGES CXX)


add_library(insertion_sort_lib 
    src/sortings.cpp
    src/io.cpp
)

target_include_directories(insertion_sort_lib PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)


add_executable(insertion_sort_run src/main.cpp)
target_link_libraries(insertion_sort_run PRIVATE insertion_sort_lib)


if(BUILD_TESTING)
    add_subdirectory(tests)
endif()