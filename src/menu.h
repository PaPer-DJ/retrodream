//
// Created by cpasjuste on 17/02/2020.
//

#ifndef RETRODREAM_MENU_H
#define RETRODREAM_MENU_H

class Menu : public c2d::RoundedRectangleShape {

public:

    explicit Menu(RetroDream *rd, const c2d::FloatRect &rect);

    void setVisibility(c2d::Visibility visibility, bool tweenPlay = false) override;

    bool onInput(c2d::Input::Player *players) override;

protected:

    RetroDream *retroDream = nullptr;
    c2d::Text *title = nullptr;
    c2d::ConfigBox *configBox = nullptr;
    c2d::config::Group config;
    bool dirty = false;
};

#endif //RETRODREAM_MENU_H
