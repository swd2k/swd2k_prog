#include "io.hpp"
#include "sortings.hpp"

int main() {
    int arr[] = {3, 8, 11, 5, 4, 6};
	const int arr_size = sizeof(arr) / sizeof(arr[0]);

	biv::print_array("������ �� ����������:", arr, arr_size);

    biv::sortings::insertion_sort(arr, arr_size);

    biv::print_array("������ ����� ����������:", arr, arr_size);

    return 0;
}

