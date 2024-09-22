#ifndef WEAPON_H
#define WEAPON_H

#include "Item.h"
#include <string>

using namespace std;

class Weapon : public Item {
    private:
        float damage, criticalDamage;
    public:
        Weapon(string _name, string _description, float _damage, float _criticalDamage) : Item(_name, _description) {
            this->damage = _damage;
            this->criticalDamage = _criticalDamage;
        }
        float Damage();
        float CriticalDamage();
};

#endif