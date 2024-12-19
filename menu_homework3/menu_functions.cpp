﻿#include "menu_functions.hpp"
#include <cstdlib>
#include <iostream>

const Swd2k::MenuItem* Swd2k::display_menu(const MenuItem* current, const std::string& greeting) {
    std::cout << greeting << std::endl;
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

const Swd2k::MenuItem* Swd2k::show_menu(const MenuItem* current) {
    return display_menu(current, "Приветствую тебя пользователь.");
}

const Swd2k::MenuItem* Swd2k::exit(const MenuItem* current) {
    std::exit(0);
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




