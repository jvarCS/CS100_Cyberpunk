#include "gtest/gtest.h"
#include "../header/Weapon.h"
#include <iostream>

using namespace std;

TEST(WeaponTest, DamageTest){
    Weapon *weapon = new Weapon("name", "descrp", 20, 10);
    EXPECT_EQ(weapon->Damage(),20);
    delete weapon;
}

TEST(WeaponTest, CritTest){
    Weapon *weapon = new Weapon("name", "descrp", 20, 10);
    EXPECT_EQ(weapon->CriticalDamage(),10);
    delete weapon;
}