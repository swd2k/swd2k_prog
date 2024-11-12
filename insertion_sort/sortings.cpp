#include "sortings.hpp"

void biv::sortings::insertion_sort(int* const arr, const int size) {
    for (int i = 1; i < size; ++i) {
    int x = arr[i];
    int j = i;
       while (j > 0 && arr[j - 1] > x) {
       arr[j] = arr[j - 1];
       --j;
                                       }
    arr[j] = x;
  }
}