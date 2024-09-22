#include "gtest/gtest.h"
#include "../header/Enemy.h"
#include "../header/Weapon.h"
TEST(Enemytests, testconstructor){
    Enemy *enemy = new Enemy("Bob", 2, 3, 4, 0.7);
    EXPECT_EQ(enemy->getName(), "Bob");
    EXPECT_EQ(enemy->Vitality(), 2);
    EXPECT_EQ(enemy->Agility(), 3);
    EXPECT_EQ(enemy->Luck(), 4);
    EXPECT_EQ(enemy->CurrentHealth(), 200);
    EXPECT_EQ(enemy->MaxHealth(), 200);
    EXPECT_NEAR(enemy->getExp(), 0.7, 0.01);
    delete enemy;
}

TEST(Enemytests, testBaseConstructor){
    Enemy *enemy = new Enemy("david");
    EXPECT_EQ(enemy->getName(), "david");
    EXPECT_EQ(enemy->Vitality(), 0);
    EXPECT_EQ(enemy->Agility(), 0);
    EXPECT_EQ(enemy->Luck(), 0);
    EXPECT_EQ(enemy->CurrentHealth(), 0);
    EXPECT_EQ(enemy->MaxHealth(), 0);
    EXPECT_NEAR(enemy->getExp(), 0, 0.01);
    delete enemy;
}

TEST(Enemytests, testenemyWeaponsEquip){
    Enemy *enemy = new Enemy("Joe");
    enemy->equipWeapon(20.0, 2.0);
    EXPECT_EQ(enemy->weapon->Description(), "A crude axe with decades of use.");
    EXPECT_EQ(enemy->weapon->Name(), "Axe");
    EXPECT_NEAR(enemy->weapon->Damage(), 20.0, 0.01);
    EXPECT_NEAR(enemy->weapon->CriticalDamage(), 2.0, 0.01);
    delete enemy;
}

TEST(Enemytests, testenemyWeaponsEquip2){
    Enemy *enemy = new Enemy("Joe");
    enemy->equipWeapon(0, 0);
    EXPECT_EQ(enemy->weapon->Damage(), 0);
    EXPECT_EQ(enemy->weapon->CriticalDamage(), 0);
    delete enemy;
}


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

