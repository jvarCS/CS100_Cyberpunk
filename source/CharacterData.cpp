#include "../header/CharacterData.h"
#include <algorithm>
#include <string>

using namespace std;

void CharacterData::SetMaxHealth(double hp){
    maxHealth = max(hp, 0.0);
    UpdateData();
}

double CharacterData::MaxHealth(){
    return maxHealth;
}

void CharacterData::AddMaxHealth(double hp){       // Should increasing MaxHP increase currentHP?
    maxHealth += hp;
    currentHealth = maxHealth;
    UpdateData();
}

void CharacterData::SetCurrentHealth(double hp){
    currentHealth = max(hp, 0.0);

    UpdateData();
}

void CharacterData::AddCurrentHealth(double hp){ 
    double tempHP = currentHealth;
    if(hp > 0){
        currentHealth = min(tempHP + hp, maxHealth);
    }
    else if(hp < 0){
        currentHealth = max(tempHP + hp, 0.0);
    }

    UpdateData();
}

double CharacterData::CurrentHealth(){
    return currentHealth;
}

void CharacterData::SetExperience(double xp){
    experience = min(max(xp, 0.0), .99999);
    UpdateData();
}

bool CharacterData::AddExperience(double xp){ 
    if(level == 0 && xp <= 0.0){
        return false;                             // stops player from going below level 0
    }

    experience += xp;
    
    if(CanLevelUp()){
        LevelUp();
        return true;
    }
    else if(CanLevelDown()){
        LevelDown();
        return true;
    }

    UpdateData();
    return false;
}

double CharacterData::Experience(){
    return experience;
}

 void CharacterData::SetLevel(int lvl){
    level = max(0, lvl);
    UpdateData();
}
void CharacterData::AddLevel(int lvl){ 
    int tempLvl = level;
    level = max(0, tempLvl + lvl);
    UpdateData();
}

double CharacterData::Level(){
    return level;
}

bool CharacterData::CanLevelUp(){
    if(level == 0 && experience <= 0.0){
        experience = 0;
        return false;                             // stops player from going below level 0
    }

    if(experience >= 1){
       return true;
    }

    return false;  
}

void CharacterData::LevelUp(){
    while(CanLevelUp()){
        experience -= 1.0;
        level += 1;
    }
}

bool CharacterData::CanLevelDown(){
    if(level == 0 && experience <= 0.0){
        experience = 0;
        return false;                             // stops player from going below level 0
    }

    if(experience < 0 && level > 0){
       return true;
    }

    return false;  
}

void CharacterData::LevelDown(){
    while(CanLevelDown()){
        experience += 1.0;
        level -= 1;
    }
}

// void CharacterData::SetArmor(double _armor){
//     armor = max(_armor, 0.0);
//     UpdateData();
// }

// double CharacterData::Armor(){
//     return armor;
// }

// void CharacterData::AddArmor(double _armor){   
//     double tempArmor = armor;   
//     armor = max(tempArmor + _armor, 0.0);
//     UpdateData();
// }

void CharacterData::UpdateData(){
    data.level = level;
    data.experience = experience;
    data.currentHealth = currentHealth;
    data.maxHealth = maxHealth;
    //data.armor = armor;
}