#include "gtest/gtest.h"
#include "../header/Inventory.h"

using namespace std;

class CharacterInventoryStub : public Inventory {
    private:
    public:
    CharacterInventoryStub(){
        Weapon *tempWeapon = new Weapon("Cat Palm", "Blood from its previous owner remains stained on the claws.", 10.0, 20.0);
            weapons.push_back(*tempWeapon);
            delete tempWeapon;
            tempWeapon = new Weapon("Cat", "Set and forget this ferocious beast into battle. Nothing will last long enough against all nine lives.", 40.0, 80.0);
            weapons.push_back(*tempWeapon);
            delete tempWeapon;
            tempWeapon = new Weapon("Kitten", "A young yet fiesty kitten. Kills with cuteness.", 5.0, 10.0);
            weapons.push_back(*tempWeapon);
            delete tempWeapon;

            Consumable *tempConsumable = new Consumable("Health Potion", "Health", 5.0, "Restores 5 Health");
            consumables.push_back(*tempConsumable);
            delete tempConsumable;
            tempConsumable = new Consumable("Energy Drink", "Energy", 5.0, "Restores 5 Energy");
            consumables.push_back(*tempConsumable);
            delete tempConsumable;
            tempConsumable = new Consumable("Dr Pepper", "GodPowers", 1.0, "A drink for those with good taste.");
            consumables.push_back(*tempConsumable);
            delete tempConsumable;
    }
};

TEST(CharacterInventoryStubTests, testInventoryItems){
    CharacterInventoryStub *vectorStub = new CharacterInventoryStub();

    auto i = vectorStub->weapons.begin();
    EXPECT_TRUE(i->Name() == "Cat Palm");
    EXPECT_TRUE(i->Description() == "Blood from its previous owner remains stained on the claws.");
    EXPECT_NEAR(i->Damage(), 10.0, .1);
    EXPECT_NEAR(i->CriticalDamage(), 20.0, .1);
    i++;
    EXPECT_TRUE(i->Name() == "Cat");
    EXPECT_TRUE(i->Description() == "Set and forget this ferocious beast into battle. Nothing will last long enough against all nine lives.");
    EXPECT_NEAR(i->Damage(), 40.0, .1);
    EXPECT_NEAR(i->CriticalDamage(), 80.0, .1);
    i++;
    EXPECT_TRUE(i->Name() == "Kitten");
    EXPECT_TRUE(i->Description() == "A young yet fiesty kitten. Kills with cuteness.");
    EXPECT_NEAR(i->Damage(), 5.0, .1);
    EXPECT_NEAR(i->CriticalDamage(), 10.0, .1);
    
    auto x = vectorStub->consumables.begin();
    EXPECT_TRUE(x->Name() == "Health Potion");
    EXPECT_TRUE(x->Description() == "Restores 5 Health");
    EXPECT_NEAR(x->Effect(), 5.0, .1);
    EXPECT_TRUE(x->Type() == "Health");
    x++;
    EXPECT_TRUE(x->Name() == "Energy Drink");
    EXPECT_TRUE(x->Description() == "Restores 5 Energy");
    EXPECT_NEAR(x->Effect(), 5.0, .1);
    EXPECT_TRUE(x->Type() == "Energy");
    x++;
    EXPECT_TRUE(x->Name() == "Dr Pepper");
    EXPECT_TRUE(x->Description() == "A drink for those with good taste.");
    EXPECT_NEAR(x->Effect(), 1.0, .1);
    EXPECT_TRUE(x->Type() == "GodPowers");
    
    delete vectorStub;
};