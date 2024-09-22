#include "../header/Enemy.h"
#include "../header/Weapon.h"

using namespace std;

void Enemy::equipWeapon(float weaponDMG, float weaponCrit){
    weapon = new Weapon("Axe", "A crude axe with decades of use.", weaponDMG, weaponCrit);
}

