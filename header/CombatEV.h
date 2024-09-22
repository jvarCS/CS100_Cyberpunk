#ifndef COMBATEV_H
#define COMBATEV_H

#include <iostream>
#include "Event.h"
#include "Enemy.h"
#include "Character.h"
#include "Inventory.h"
#include "Combat.h"

class CombatEV : public Event {
    private:
        Character *player;
        Enemy *enemy;
    public:
        CombatEV(Character *, Enemy*);
        void runEvent(Inventory *);     //General function to run event
        bool chckAgl(Character *,Enemy *) ;     //Determines who has higher agility to initiate combat
        void fight(Character *, Enemy *, Inventory *);        //Loops combat until player or enemy dies
        bool playerMenu(Combat *, Inventory *, Character *, Enemy*);
};

#endif