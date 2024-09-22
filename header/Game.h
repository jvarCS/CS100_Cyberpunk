#ifndef GAME_H
#define GAME_H

#include "Story.h"
#include "Inventory.h"
#include "Character.h"
#include "Enemy.h"
#include "CombatEV.h"

class Game {
    private:
       Character *player;
       Story *story;
       Inventory *inv;
    public:
        Game();
        bool runGame();
        void prologue();
        bool floorOne();
        bool floorTwo();
        bool floorThree();
        void epilogue();
        void setChar();
        double genEnemXP();
        bool combat(string, int, int, int, double, int, int);
        void loot();
        bool isDead(Enemy *);
        void levelUp(Enemy *);
        ~Game();
};

#endif