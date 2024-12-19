pragma once
#include "menu.hpp"

namespace Swd2k {
    const MenuItem* display_menu(const MenuItem* current);

    const MenuItem* show_menu(const MenuItem* current);

    const MenuItem* exit(const MenuItem* current);

    const MenuItem* show_dalniy_vostok_menu(const MenuItem* current);
    const MenuItem* show_altay_menu(const MenuItem* current);
    const MenuItem* show_zolotoe_koltso_rossii_menu(const MenuItem* current);
    const MenuItem* go_back_geograf(const MenuItem* current);

    const MenuItem* show_vladivostok_menu(const MenuItem* current);
    const MenuItem* show_sakhalin_menu(const MenuItem* current);
    const MenuItem* show_khabarovsk_menu(const MenuItem* current);
}
