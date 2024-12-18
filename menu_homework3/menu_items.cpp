#include "menu_items.hpp"
#include <cstddef>
#include "menu_functions.hpp"

const Swd2k::MenuItem Swd2k::VLADIVOSTOK = {
    "1 - Хочу узнать про Владивосток!", Swd2k::vladivostok, &Swd2k::DALNIY_VOSTOK
};
const Swd2k::MenuItem Swd2k::SAKHALIN = {
    "2 - Хочу узнать про Сахалин!", Swd2k::sakhalin, &Swd2k::DALNIY_VOSTOK
};
const Swd2k::MenuItem Swd2k::KHABAROVSK = {
    "3 - Хочу узнать про Хабаровск!", Swd2k::khabarovsk, &Swd2k::DALNIY_VOSTOK
};

const Swd2k::MenuItem Swd2k::GEOGRAF_BACK2 = {
    "0 - Выйти в предыдущее меню", Swd2k::geograf_back2, &Swd2k::DALNIY_VOSTOK
};

namespace {
    const Swd2k::MenuItem* const study_children[] = {
        &Swd2k::GEOGRAF_BACK2,
        &Swd2k::VLADIVOSTOK,
        &Swd2k::SAKHALIN,
        &Swd2k::KHABAROVSK
    };
    const int study_size = sizeof(study_children) / sizeof(study_children[0]);
}

const Swd2k::MenuItem Swd2k::DALNIY_VOSTOK = {
    "1 - Хочу узнать про Дальний Восток!", Swd2k::dalniy_vostok, &Swd2k::STUDY, study_children, study_size
};
const Swd2k::MenuItem Swd2k::ALTAY = {
    "2 - Хочу узнать про Алтай!", Swd2k::altay, &Swd2k::STUDY
};
const Swd2k::MenuItem Swd2k::ZOLOTOE_KOLTSO_ROSSII = {
    "3 - Хочу узнать про Золотое Кольцо России!", Swd2k::zolotoe_koltso_rossii, &Swd2k::STUDY
};

const Swd2k::MenuItem Swd2k::GEOGRAF_BACK = {
    "0 - Выйти в главное меню", Swd2k::geograf_back, &Swd2k::STUDY
};

namespace {
    const Swd2k::MenuItem* const study_children[] = {
        &Swd2k::GEOGRAF_BACK,
        &Swd2k::DALNIY_VOSTOK,
        &Swd2k::ALTAY,
        &Swd2k::ZOLOTOE_KOLTSO_ROSSII
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
