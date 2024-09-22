#include <iostream>
#include "../header/Game.h"
#include <time.h>
#include "../header/Menu.h"

using namespace std;

int main() {
    srand(time(0));

    Menu *menu = new Menu();
    if (menu->pauseMenu()) {
    Game *game = new Game();
    game->runGame();
    delete game;
    }
    delete menu;

    /*
        ADD_EXECUTABLE(runPrgm
	source/main.cpp
	source/Game.cpp
    source/LootEv.cpp
    source/Item.cpp
    source/Menu.cpp
    source/Story.cpp
    source/Weapon.cpp
    source/Inventory.cpp
    source/EnemyStats.cpp
    source/EnemyData.cpp
    source/Enemy.cpp
    source/CreateChar.cpp
    source/Consumable.cpp
    source/CombatEV.cpp
    source/Combat.cpp
    source/CharacterStats.cpp
    source/CharacterData.cpp
    source/Character.cpp
)

    
    */

    return 0;
}