#include "menu_functions.hpp"
#include <cstdlib>
#include <iostream>
#include <limits>

const Swd2k::MenuItem* Swd2k::display_menu(const MenuItem* current, const std::string& greeting) {
    std::cout << greeting << std::endl;
    for (int i = 1; i < current->children_count; i++) {
        std::cout << current->children[i]->title << std::endl;
    }
    std::cout << current->children[0]->title << std::endl;
    std::cout << "Географ > ";

    int user_input = -1;
    while (!(std::cin >> user_input) || user_input < 0 || user_input >= current->children_count) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Неверный ввод. Пожалуйста, введите число от 0 до " 
                  << current->children_count-1 << ": ";
    }
    return current->children[user_input];
}

const Swd2k::MenuItem* Swd2k::show_menu(const MenuItem* current) {
    return display_menu(current, "Приветствую тебя пользователь.");
}

const Swd2k::MenuItem* Swd2k::exit(const MenuItem* /*current*/) {  // Добавлен комментарий для неиспользуемого параметра
    std::exit(0);
    return nullptr;  // Добавлено для устранения предупреждения
}

const Swd2k::MenuItem* Swd2k::show_dalniy_vostok_menu(const MenuItem* current) {
    return display_menu(current, current->title);
}

const Swd2k::MenuItem* Swd2k::show_altay_menu(const MenuItem* current) {
    // TODO
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const Swd2k::MenuItem* Swd2k::show_zolotoe_koltso_rossii_menu(const MenuItem* current) {
    // TODO
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const Swd2k::MenuItem* Swd2k::go_back_geograf(const MenuItem* current) {
    // TODO
    std::cout << current->title << std::endl << std::endl;
    return current->parent->parent;
}

const Swd2k::MenuItem* Swd2k::show_vladivostok_menu(const MenuItem* current) {
    // TODO
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const Swd2k::MenuItem* Swd2k::show_sakhalin_menu(const MenuItem* current) {
    // TODO
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const Swd2k::MenuItem* Swd2k::show_khabarovsk_menu(const MenuItem* current) {
    // TODO
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}




