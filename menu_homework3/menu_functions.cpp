#include "menu_functions.hpp"
#include <cstdlib>
#include <iostream>

const Swd2k::MenuItem* Swd2k::show_menu(const MenuItem* current) {
    std::cout << "Приветствую тебя пользователь." << std::endl;
    for (int i = 1; i < current->children_count; i++) {
        std::cout << current->children[i]->title << std::endl;
    }
    std::cout << current->children[0]->title << std::endl;
    std::cout << "Географ > ";

    int user_input;
    std::cin >> user_input;
    std::cout << std::endl;
    return current->children[user_input];
}

const Swd2k::MenuItem* Swd2k::exit(const MenuItem* current) {
    std::exit(0);
}

const Swd2k::MenuItem* Swd2k::dalniy_vostok(const MenuItem* current) {
    std::cout << current->title << std::endl << std::endl;
    for (int i = 1; i < current->children_count; i++) {
        std::cout << current->children[i]->title << std::endl;
    }

    std::cout << "Выберите пункт: ";
    int user_input;
    std::cin >> user_input;
    std::cout << std::endl;

    return current->children[user_input];
}

const Swd2k::MenuItem* Swd2k::altay(const MenuItem* current) {
    // TODO
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const Swd2k::MenuItem* Swd2k::zolotoe_koltso_rossii(const MenuItem* current) {
    // TODO
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const Swd2k::MenuItem* Swd2k::geograf_back(const MenuItem* current) {
    // TODO
    std::cout << current->title << std::endl << std::endl;
    return current->parent->parent;
}

const Swd2k::MenuItem* Swd2k::vladivostok(const MenuItem* current) {
    // TODO
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const Swd2k::MenuItem* Swd2k::sakhalin(const MenuItem* current) {
    // TODO
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const Swd2k::MenuItem* Swd2k::khabarovsk(const MenuItem* current) {
    // TODO
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const Swd2k::MenuItem* Swd2k::geograf_back2(const MenuItem* current) {
    // TODO
    std::cout << current->title << std::endl << std::endl;
    return current->parent->parent;
}


