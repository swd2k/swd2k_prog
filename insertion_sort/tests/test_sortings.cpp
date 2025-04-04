#include "insertion_sort/sortings.hpp"
#include <gtest/gtest.h>
#include <vector>

TEST(SortTest, EmptyVector) {
    std::vector<int> v;
    biv::sortings::insertion_sort(v);
    EXPECT_TRUE(v.empty());
}

TEST(SortTest, AlreadySorted) {
    std::vector<int> v = {1, 2, 3};
    biv::sortings::insertion_sort(v);
    EXPECT_EQ(v, (std::vector<int>{1, 2, 3}));
}

TEST(SortTest, ReverseOrder) {
    std::vector<int> v = {3, 2, 1};
    biv::sortings::insertion_sort(v);
    EXPECT_EQ(v, (std::vector<int>{1, 2, 3}));
}

