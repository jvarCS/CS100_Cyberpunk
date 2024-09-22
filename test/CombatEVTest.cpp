#include "gtest/gtest.h"
#include "../header/Weapon.h"
#include "../header/CombatEV.h"
#include "../header/Enemy.h"
#include "../header/Character.h"
#include <string>

using namespace std;

Test(CombatEV, checkAgleTest){
    Character *tempPlayer = new Character("david", Character::Path::Corporate);
    Enemy *tempEnemy = new Enemy("steve", 0, 2, 0, 0.0);

    CombatEV *combat = new CombatEV(tempPlayer, tempEnemy);

    EXPECT_FALSE(combat->chckAgl(tempPlayer, tempEnemy));

}
Test(CombatEV, checkAgleTest2){
    Character *tempPlayer = new Character("david", Character::Path::Corporate, 0, 100, 1, 0, 5, 0, 0.0);
    Enemy *tempEnemy = new Enemy("steve", 0, 2, 0, 0.0);

    CombatEV *combat = new CombatEV(tempPlayer, tempEnemy);

    EXPECT_TRUE(combat->chckAgl(tempPlayer, tempEnemy));

}