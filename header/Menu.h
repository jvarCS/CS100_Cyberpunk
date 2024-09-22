#ifndef MENU_H
#define MENU_H

#include <iostream>

using namespace std;

class Menu{
    private:
        char menuInput;
    public:
        bool pauseMenu();
        void invalidInput();
};

#endif