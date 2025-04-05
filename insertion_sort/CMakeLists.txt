project(insertion_sort LANGUAGES CXX)

add_library(insertion_sort_lib 
    src/sortings.cpp
    src/io.cpp
)

target_include_directories(insertion_sort_lib PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include/insertion_sort
)

add_subdirectory(tests)