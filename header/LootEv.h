#ifndef LOOTEV_H
#define LOOTEV_H

#include <iostream>
#include "Event.h"
#include "Inventory.h"


class LootEV : public Event {
    public:
        void runEvent(Inventory *);     //General function to run event
        void getHpBoost(Inventory *);
        void getWeapon(Inventory *, int, bool start = false);
};

#endif