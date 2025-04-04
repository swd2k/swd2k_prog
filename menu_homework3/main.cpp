#include <clocale>
#include <iostream>
#include "menu.hpp"
#include "menu_functions.hpp"
#include "menu_items.hpp"

int main() {
    std::setlocale(LC_ALL, "Russian");
    const Swd2k::MenuItem* current = &Swd2k::MAIN;
    
    try {
        do {
            current = current->func(current);
        } while (true);
    }
    catch (const std::exception& e) {
        std::cerr << "Ошибка: " << e.what() << std::endl;
        return 1;
    }
    
    return 0;
}
