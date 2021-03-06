//
// Created by cpasjuste on 19/10/16.
//

#ifndef C2DUI_ROMLIST_H
#define C2DUI_ROMLIST_H

#include <vector>

namespace c2dui {

    class UIMain;

    class RomList {

    public:

        RomList(UIMain *ui, const std::string &emuVersion);

        virtual ~RomList();

        virtual void build();

        void addFav(const ss_api::Game &game);

        void removeFav(const ss_api::Game &game);

        void setLoadingText(const char *format, ...);

        UIMain *ui;
        c2d::RectangleShape *rect;
        c2d::Text *text;
        ss_api::GameList gameList;
        ss_api::GameList gameListFav;
        std::vector<std::string> paths;
        char icon_path[1024];
        float time_start = 0;
    };
}

#endif //C2DUI_ROMLIST_H
