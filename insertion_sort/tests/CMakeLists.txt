add_executable(insertion_sort_tests
    test_sortings.cpp
)

target_link_libraries(insertion_sort_tests PRIVATE
    insertion_sort_lib
    gtest_main
)

target_include_directories(insertion_sort_tests PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/../include
)

include(GoogleTest)
gtest_discover_tests(insertion_sort_tests)