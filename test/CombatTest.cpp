#include "gtest/gtest.h"
#include "../header/Character.h"
#include "../header/Enemy.h"
#include "../header/Weapon.h"
#include "../header/Combat.h"
#include <string>

using namespace std;

/*
    Combat Class
*/
TEST(CombatTests, testCombatFatal){
  Character *tempPlayer = new Character("Javier", Character::Path::Corporate, 1, 1, 1);
  Enemy *tempEnemy = new Enemy("Justin", 1);

  Combat *combat = new Combat(tempPlayer, tempEnemy);

  string name = "Cat";
  string description = "Saimese kitty that knows Wing Chun.";
  Weapon *ofMassDestruction = new Weapon(name, description, (float)200.0, (float)200.0);
  tempPlayer->weapon = ofMassDestruction;
  tempEnemy->weapon = ofMassDestruction;

  EXPECT_TRUE(combat->DoPlayerCombat());
  EXPECT_TRUE(combat->DoEnemyCombat());

  delete combat;
  delete ofMassDestruction;
}

TEST(CombatTests, testCombatNonFatal){
  Character *tempPlayer = new Character("Javier", Character::Path::Corporate, 1, 1, 1);
  Enemy *tempEnemy = new Enemy("Justin", 1);

  Combat *combat = new Combat(tempPlayer, tempEnemy);

  string name = "Cat";
  string description = "Saimese kitty that knows Wing Chun.";
  Weapon *ofMassDestruction = new Weapon(name, description, (float)1.0, (float)2.0);
  tempPlayer->weapon = ofMassDestruction;
  tempEnemy->weapon = ofMassDestruction;

  EXPECT_FALSE(combat->DoPlayerCombat());
  EXPECT_FALSE(combat->DoEnemyCombat());

  delete combat;
  delete ofMassDestruction;
}

// int main(int argc, char **argv) {
//     ::testing::InitGoogleTest(&argc, argv);
//     return RUN_ALL_TESTS();
// }