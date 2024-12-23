#include "menu_items.hpp"
#include <cstddef>
#include "menu_functions.hpp"

const Swd2k::MenuItem Swd2k::SHOW_VLADIVOSTOK_MENU = {
    "1 - Хочу узнать про Владивосток!", Swd2k::show_vladivostok_menu, &Swd2k::SHOW_DALNIY_VOSTOK_MENU
};
const Swd2k::MenuItem Swd2k::SHOW_SAKHALIN_MENU = {
    "2 - Хочу узнать про Сахалин!", Swd2k::show_sakhalin_menu, &Swd2k::SHOW_DALNIY_VOSTOK_MENU
};
const Swd2k::MenuItem Swd2k::SHOW_KHABAROVSK_MENU = {
    "3 - Хочу узнать про Хабаровск!", Swd2k::show_khabarovsk_menu, &Swd2k::SHOW_DALNIY_VOSTOK_MENU
};

const Swd2k::MenuItem Swd2k::GO_GEOGRAF_BACK = {
    "0 - Выйти в предыдущее меню", Swd2k::go_back_geograf, &Swd2k::SHOW_DALNIY_VOSTOK_MENU
};

namespace {
    const Swd2k::MenuItem* const dalniy_vostok_children[] = {
        &Swd2k::GO_GEOGRAF_BACK,
        &Swd2k::SHOW_VLADIVOSTOK_MENU,
        &Swd2k::SHOW_SAKHALIN_MENU,
        &Swd2k::SHOW_KHABAROVSK_MENU
    };
    const int dalniy_vostok_size = sizeof(dalniy_vostok_children) / sizeof(dalniy_vostok_children[0]);
}

const Swd2k::MenuItem Swd2k::SHOW_DALNIY_VOSTOK_MENU = {
    "1 - Хочу узнать про Дальний Восток!", Swd2k::show_dalniy_vostok_menu, &Swd2k::STUDY, dalniy_vostok_children, dalniy_vostok_size
};
const Swd2k::MenuItem Swd2k::SHOW_ALTAY_MENU = {
    "2 - Хочу узнать про Алтай!", Swd2k::show_altay_menu, &Swd2k::STUDY
};
const Swd2k::MenuItem Swd2k::SHOW_ZOLOTOE_KOLTSO_ROSSII_MENU = {
    "3 - Хочу узнать про Золотое Кольцо России!", Swd2k::show_zolotoe_koltso_rossii_menu, &Swd2k::STUDY
};

const Swd2k::MenuItem Swd2k::GO_GEOGRAF_BACK_MAIN = {
    "0 - Выйти в главное меню", Swd2k::go_back_geograf, &Swd2k::STUDY
};

namespace {
    const Swd2k::MenuItem* const study_children[] = {
        &Swd2k::GO_GEOGRAF_BACK_MAIN,
        &Swd2k::SHOW_DALNIY_VOSTOK_MENU,
        &Swd2k::SHOW_ALTAY_MENU,
        &Swd2k::SHOW_ZOLOTOE_KOLTSO_ROSSII_MENU
    };
    const int study_size = sizeof(study_children) / sizeof(study_children[0]);
}

const Swd2k::MenuItem Swd2k::STUDY = {
    "1 - Путешествовать по России!", Swd2k::show_menu, &Swd2k::MAIN, study_children, study_size
};
const Swd2k::MenuItem Swd2k::EXIT = {
    "0 - Закончить путешествия", Swd2k::exit, &Swd2k::MAIN
};

namespace {
    const Swd2k::MenuItem* const main_children[] = {
        &Swd2k::EXIT,
        &Swd2k::STUDY
    };
    const int main_size = sizeof(main_children) / sizeof(main_children[0]);
}

const Swd2k::MenuItem Swd2k::MAIN = {
    nullptr, Swd2k::show_menu, nullptr, main_children, main_size
};
