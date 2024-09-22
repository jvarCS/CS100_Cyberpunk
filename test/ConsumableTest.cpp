#include "gtest/gtest.h"
#include "../header/Consumable.h"
#include <string>

TEST(ConsumableTest, testConsumableConstructor){
    Consumable Potion("Health_Potion", "health", 5, "A potion that when consummed adds exactly 5 health points to your charcter") ;
    EXPECT_EQ(Potion.Type(), "health");
    EXPECT_EQ(Potion.Name(), "Health_Potion");
    EXPECT_EQ(Potion.Description(), "A potion that when consummed adds exactly 5 health points to your charcter");
    EXPECT_NEAR(Potion.Effect(), 5.0, 0.01);
}

TEST(ConsumableTest, testUseItem){
    Consumable Potion("Health_Potion", "health", 0.4, "A potion that when consummed adds exactly 40 health points to your charcter") ;
    Character *player = new Character("David", Character::Path::Corporate);
    player->SetCurrentHealth(30.0);
    Potion.useItem(player);
    EXPECT_NEAR(player->CurrentHealth(), 70.0, 0.01);
}

TEST(ConsumableTest, testUseItem2){
    Consumable Potion("Useless_potion", "health", 0.1, "This potion adds 10 health points to your currect health points") ;
    Character *player = new Character("Lucy", Character::Path::Corporate);
    player->SetCurrentHealth(1.0);
    Potion.useItem(player);
    EXPECT_NEAR(player->CurrentHealth(), 11.0, 0.01);
}