#ifndef CREATECHAR_H
#define CREATECHAR_H

#include <iostream>
#include "Character.h"
#include "Inventory.h"

class CreateChar {
    public:
        Character* makeChar(Inventory *);
        void setName(string &);
        void setOrigin(string &);
        void setStats(string &, bool, Character *player=nullptr, Inventory *inv=nullptr);
        void setWeapon(Inventory *inv, Character *);
};

#endif