//
// Created by cpasjuste on 21/01/2020.
//

#ifndef RETRODREAM_FILEMENU_H
#define RETRODREAM_FILEMENU_H

class FileMenu : public c2d::RoundedRectangleShape {

public:
    enum GameOption {
        Boot = 0,
        Memory,
        Dma,
        Sync,
        Cdda,
        Loader,
        Os
    };

    explicit FileMenu(RetroDream *rd, const c2d::FloatRect &rect);

    void setTitle(const std::string &text);

    void setVisibility(c2d::Visibility visibility, bool tweenPlay = false) override;

    bool onInput(c2d::Input::Player *players) override;

private:

    RetroDream *retroDream = nullptr;
    c2d::Text *title = nullptr;
    c2d::ConfigBox *configBox = nullptr;
    c2d::config::Group configGroup;
};

#endif //RETRODREAM_FILEMENU_H
