#include <iostream>
#include "../header/LootEv.h"
#include "../header/Weapon.h"
#include "../header/Consumable.h"
#include "../header/Inventory.h"

using namespace std;

void LootEV::runEvent(Inventory *inv) {

    int itemNumber = (rand() % 10) + 1;

    if (itemNumber <= 10) getHpBoost(inv);
    else getWeapon(inv,0);
}

void LootEV::getHpBoost(Inventory *inv) {
    int hpType = (rand() % 9) + 1;
    string itemName = (hpType <= 5)? "MAXDOC MK. 1" : (hpType <= 8)? "MAXDOC MK. 2" : "MAXDOC MK. 3";
    float itemEffect = (hpType <= 5)? .4 : (hpType <= 8)? .6 : .8;
    string descrp = (hpType <= 5)? "Restores a small amount of HP" : (hpType <= 8)? "Restores a medium amount of HP" : "Restores a large amount of HP";
    Consumable *hp = new Consumable(itemName,"health",itemEffect,descrp);
    string input;
    do {
        cout << "The following consumable dropped after combat: " << "\n" << hp->Name() << " - " << hp->Description() << "\n"
             << "Take it?\n";
        cin  >> input;
    if (input == "1") inv->addCons(hp);
    else if (input == "2") delete hp;
    } while(input != "1" and input != "2");
    cout << "\n\n\n\n\n\n\n\n";
}

void LootEV::getWeapon(Inventory *inv, int randWeapon, bool start) {
    randWeapon = (randWeapon == 0)? (rand() % 6) + 1 : randWeapon;
    string name, descrp;
    float damage = 0, crit = 0;

    switch(randWeapon) {
        case 1: {
            name = "Arasaka Nowaki";
            damage = 30;
            crit = 50;
            descrp = "Masamune - power reimagined";
            break;
        }
        case 2: {
            name = "Militech M251s Ajax";
            damage = 50;
            crit = 10;
            descrp = "Come rain or shine, it'll weather it out";
            break;
        }
        case 3: {
            name = "Arasaka Tamayura";
            damage = 10;
            crit = 30;
            descrp = "Engineered to fit any hand";
            break;
        }
        case 4: {
            name = "Seraph";
            damage = 20;
            crit = 30;
            descrp = "Padre's closest companion. Judge, jury, and executioner for divine justice - all rolled into one";
            break;
        }
        case 5: {
            name = "Militech Crusher";
            damage = 60;
            crit = 0;
            descrp = "A firearm staple since 2020";
            break;
        }
        case 6: {
            name = "Arasaka Howler";
            damage = 70;
            crit = 0;
            descrp = "Proof that you mean business";
            break;
        }
        case 7: {
            name = "Fenrir";
            damage = 30;
            crit = 20;
            descrp = "Belches fire like a dragon with a heartburn";
            break;
        }
        case 8: {
            name = "Problem Solver";
            damage = 20;
            crit = 40;
            descrp = "Don't bother aiming. Something's guaranteed to hit";
            break;
        }
    }
    Weapon *wep = new Weapon(name, descrp, damage, crit);
    string input;
    if (!start) {
        do {
            cout << "The following weapon dropped after combat: " << "\n" << wep->Name() << " - " << wep->Description() << "\n"
                << "Take it?\n";
            cin  >> input;
        if (input == "1") inv->addWep(wep);
        else if (input == "2") delete wep;
        } while(input != "1" and input != "2");
        cout << "\n\n\n\n\n\n\n\n";
    }
    else {
        inv->addWep(wep);
    }
}