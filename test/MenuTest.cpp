#include "gtest/gtest.h"
#include "../header/Menu.h"
#include <iostream>

using namespace std;

//UNFINISHED. I NEED SERIOUS HELP. I DONT REMEMBER HOW TO WRITE TESTS. THANK GOD THAT WASNT ON EXAM 2

TEST(MenuPrintTests, PauseMenuF){
    Menu *menu = new Menu();
    EXPECT_FALSE(menu->pauseMenu());
    delete menu;
}

TEST(MenuPrintTests, PauseMenuT){
    Menu *menu = new Menu();
    EXPECT_TRUE(menu->pauseMenu());
    delete menu;
}

TEST(MenuPrintTests, TestPauseMenu){
    
}