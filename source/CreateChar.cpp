#include <iostream>
#include "../header/CreateChar.h"
#include "../header/Inventory.h"
#include "../header/CharacterStats.h"
#include "../header/CharacterData.h"
#include "../header/LootEv.h"

Character *CreateChar::makeChar(Inventory *inv) {
    string name = "", origin = "", input = "", stats = "", done = "000";
    bool finish = false;
    do {
        cout << "\n\n\n\n\n\n\n\n-----------CHARACTER CREATION-----------\n"
             << "1. Enter name\n"
             << "2. Allocate stats\n"
             << "3. Choose origin\n"
             << "4. Finish\n";
        cin  >> input;
        cout << "\n\n\n\n\n\n\n\n";
        if (input == "1") {setName(name); done[0] = '1';}
        else if (input == "2") {setStats(stats, false); done[1] = '1';}
        else if (input == "3") {setOrigin(origin); done[2] = '1';}
        else if (input == "4") {
            if (done[0] == '1' and done[1] == '1' and done[2] == '1') finish = true;
            else cout << "You must complete each option before continuing\n";
        }
    } while(!finish);
    int statVals[4] = {5,5,5,5};
    for (int i = 0; i < stats.length(); i++) {  //VSAL
        if (stats[i] == 'V') statVals[0]++;
        else if (stats[i] == 'S') statVals[1]++;
        else if (stats[i] == 'A') statVals[2]++;
        else if (stats[i] == 'L') statVals[3]++;
    }
    characterStats tempStats = {statVals[0],statVals[1],statVals[2],statVals[3]};
    characterData tempData = {1, (double)statVals[0], (double)statVals[0], 0};
    Character *player = (origin == "1")? new Character(name, Character::Path::Corporate, tempData, tempStats) : (origin == "2")? new Character(name, Character::Path::Nomad, tempData, tempStats)
             : new Character(name, Character::Path::Street_Kid, tempData, tempStats);
    inv->setInvSize(player->Strength());
    return player;
}

void CreateChar::setName(string &name) {
    cout << "Enter name: ";
    cin.ignore();
    getline(cin,name);
}


void CreateChar::setOrigin(string &origin) {
    do {
        cout << "-------------ORIGINS--------------\n"
             << "1. Corporate\n"
             << "-You were one of the lucky few who didn't succumb to the overwhelming depravity that surrounds all who dwell in Night City.\n"
             << " Instead, you rose above and became a corpse, ignoring the issues that plague this city.\n"
             << " However, for one reason or another, that life wasn't for you.\n"
             << " Because of your time spent living lavishly and your past corporate history, you gain an additional 2 points in Luck and Vitality.\n\n"
             << "2. Nomad\n"
             << "-Settling down was never in the cards for you.\n"
             << " You made it your life's goal to travel and see first hand the good, the bad, and the ugly that exists in a world driven by technology.\n"
             << " Next up, Night City.\n"
             << " Gain an additional 2 points in Luck and Agility.\n\n"
             << "3. Street Punk\n"
             << "-Being born in this world guarantees a life full ups and downs. Being born in Night City, well, that guarantees nothing.\n"
             << " The game was rigged from the start and that pisses you off.\n"
             << " Until your dying breath, you're gonna show this city that it doesn't own you.\n"
             << " Gain an additional 2 points in Strength and Vitality\n\n"
             << "Enter number to choose\n";
        cin  >> origin;
    } while(origin != "1" and origin != "2" and origin != "3");
}

void CreateChar::setStats(string &stats, bool lvlUp, Character *player, Inventory *inv) {
    stats = "";
    string input;
    int statCnt = (lvlUp)? 2 : 5;
    do {
        cout << "----------Stat Allocation----------\n"
             << "Starting point for all stats is 5/10\nYou have " << statCnt << " free point(s) to allocate now\n"
             << "1. Vitality: Determines Max HP\n"
             << "2. Agility: Determines your starting turn in combat encounters\n"
             << "3. Strength: Determines inventory size\n"
             << "4. Luck: Determines crit chance during attacks\n"
             << "Enter stat number to allocate point\n";
        cin  >> input;
        cout << "\n\n\n\n\n\n\n\n\n";
        if (input == "1") {stats += "V"; statCnt--;}
        else if (input == "2") {stats += "A"; statCnt--;}
        else if (input == "3") {stats += "S"; statCnt--;}
        else if (input == "4") {stats += "L"; statCnt--;}
    } while (statCnt > 0 or input != "1" and input != "2" and input != "3" and input != "4");
    if (lvlUp) {
        for (int i = 0; i < stats.length(); i++) {  //VSAL
            if (stats[i] == 'V') {
                player->AddVitality(1);
                player->AddMaxHealth(100);
            }
            else if (stats[i] == 'S') {
                player->AddStrength(1);
                inv->setInvSize(player->Strength());
            }
            else if (stats[i] == 'A') player->AddAgility(1);
            else if (stats[i] == 'L') player->AddLuck(1);
        }
    }
}

void CreateChar::setWeapon(Inventory *inv, Character *player) {
    string input;
    LootEV *tempLoot = new LootEV();
    do {
        cout << "Choose your starting weapon\n"
             << "1. Seraph - Padre's closest companion. Judge, jury, and executioner for divine justice - all rolled into one\n"
             << "   Damage: 20\n"
             << "   Crit Bonus: 30\n\n"
             << "2. Fenrir - Belches fire like a dragon with a heartburn\n"
             << "   Damage: 30\n"
             << "   Crit Bonus: 20\n\n"
             << "   Enter number to choose\n";
        cin  >> input;
        if (input == "1") {
            tempLoot->getWeapon(inv,4,true);
            inv->equipWep(0,player);
        }
        else if (input == "2") {
            tempLoot->getWeapon(inv,7,true);
            inv->equipWep(0,player);
        }
    } while(input != "1" and input != "2");
    delete tempLoot;
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n";
}