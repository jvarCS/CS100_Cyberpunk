#include "gtest/gtest.h"
#include "../header/Weapon.h"
#include "../header/Item.h"

using namespace std;

/*
    Item Class
*/

TEST(ItemTests, testItemConstructor){
     Item *tempItem = new Item("Cat Palm", "Blood from its previous owner remains stained on the claws.");
    ASSERT_TRUE(tempItem->Name() == "Cat Palm");
    ASSERT_TRUE(tempItem->Description() == "Blood from its previous owner remains stained on the claws.");
    
    delete tempItem;
}

/*
    Weapon Class
*/
TEST(WeaponTests, testWeaponConstructor){
    string name = "Cat";
    string description = "Saimese kitty that knows Wing Chun.";

    Weapon *weapon = new Weapon(name, description, (float)9999.9, (float)1.0);
    ASSERT_NEAR(weapon->CriticalDamage(), 1, .1);
    ASSERT_NEAR(weapon->Damage(), 9999.9, .1);
    ASSERT_TRUE(weapon->Name() == name);
    ASSERT_TRUE(weapon->Description() == description);

    delete weapon;
}


