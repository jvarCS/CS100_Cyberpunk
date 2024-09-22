#include "../header/Consumable.h"
#include "../header/Character.h"
#include <string>


void Consumable::useItem(Character *player){
    if (this->type == "health"){
        double addHp = this->effect*player->MaxHealth() + player->CurrentHealth();
        if ((addHp > player->MaxHealth())) player->AddCurrentHealth(addHp - player->MaxHealth());
        else player->AddCurrentHealth(addHp);
        cout << "You now have " << player->CurrentHealth() << "HP\n";
    }
    //can add other types of consumable usages as other if statments 
}
string Consumable::Type(){
    return this->type;
}
float Consumable::Effect(){
    return this->effect;
}
