#include "../header/Weapon.h"
#include <string>

using namespace std;

float Weapon::Damage(){
    return damage;
}

float Weapon::CriticalDamage(){
    return criticalDamage;
}