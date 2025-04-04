#include "insertion_sort/io.hpp"
#include "insertion_sort/sortings.hpp"
#include <vector>

int main() {
    std::vector<int> data;
    biv::io::read_data(data);
    biv::sortings::insertion_sort(data);
    biv::io::print_data(data);
    return 0;
}

