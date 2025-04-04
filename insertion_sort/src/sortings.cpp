#include "insertion_sort/sortings.hpp"
#include <algorithm>

namespace biv::sortings {
    void insertion_sort(std::vector<int>& arr) {
        if (arr.empty()) return;
        insertion_sort(arr.data(), static_cast<int>(arr.size()));
    }

    void insertion_sort(int* const arr, const int size) {
        // Реализация сортировки
    }
}
