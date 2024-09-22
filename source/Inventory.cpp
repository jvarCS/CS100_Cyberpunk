#include <iostream>
#include "../header/Inventory.h"
#include "../header/Character.h"
#include "../header/Consumable.h"
#include "../header/Weapon.h"

using namespace std;

Inventory::Inventory() {
    itemCnt = 0;
}

Inventory::~Inventory() {
    cout << "INVENTORY DESTRUCTOR\n";
    for (int i = 0; i < weapons.size(); i++) {
        delete weapons[i];
    }

    for (int i = 0; i < consumables.size(); i++) {
        delete consumables[i];
    }
}

void Inventory::setInvSize(int size) {
    invSize = size;
}

void Inventory::invMenu(Character *player) {
    string input;
    int itemOrder = 1;

    do {
        cout << "Inventory Options:\n"
             << "1. Use consumable\n"
             << "2. Equip weapon\n"
             << "3. Exit inventory\n"
             << "Enter number to choose\n";
        cin  >> input;
        cout << "\n\n\n\n\n";
        if (input == "1") printCons(player);
        else if (input == "2") printWep(player);
    } while(input != "1" and input != "2" and input != "3");
}

void Inventory::printCons(Character *player) {
    char input;
    if (consumables.size() == 0) cout << "No consumables!\n";
    else {
        do {
            cout << "Consumables: \n";
            for (int i = 0; i < consumables.size(); i++) {
                cout << i+1 << ". " << consumables[i]->Name() << "\n";
            }
            cout << "Enter number to choose\n";
            cin  >> input;
        } while (input < '0' or input > ('0' + consumables.size()));
        int idx = input - '0';
        useCons(idx-1,player);
    }
    cout << "\n\n";
}

void Inventory::printWep(Character *player) {
    char input;
    if (weapons.size() == 0) cout << "No weapons!\n";
    else {
        do {
            cout << "Weapons: \n";
            for (int i = 0; i < weapons.size(); i++) {
                cout << i+1 << ". " << weapons[i]->Name() << "\n";
            }
            cout << "Enter number to choose\n";
            cin  >> input;
        } while (input < '0' or input > ('0' + weapons.size()));
        int idx = input - '0';
        equipWep(idx-1,player);
    }
    cout << "\n\n";
}

void Inventory::useCons(int index, Character *player) {
    consumables[index]->useItem(player);
}

void Inventory::equipWep(int index, Character *player) {
    player->weapon = weapons[index];
}

void Inventory::addWep(Weapon *wep) {
    if (!full()) {
        weapons.push_back(wep);
        itemCnt++;
    }
}

bool Inventory::full() {
    if (itemCnt == invSize) {
        cout << "Inventory is full!";
        cin.get();
        cout << "You must use or drop an item first before adding this one to your inventory";
        return true;
    }
    return false;
}
void Inventory::addCons(Consumable *con) {
    if (!full()) {
        consumables.push_back(con);
        itemCnt++;
    }
}