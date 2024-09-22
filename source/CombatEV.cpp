#include <iostream>
#include "../header/CombatEV.h"
#include "../header/Combat.h"
#include "../header/Inventory.h"
#include "../header/Character.h"
#include "../header/Enemy.h"

CombatEV::CombatEV(Character *player, Enemy *enemy) {
    this->player = player;
    this->enemy = enemy;
}

void CombatEV::runEvent(Inventory *inv) {
    fight(player, enemy, inv);
}

bool CombatEV::chckAgl(Character *player, Enemy *enemy) {
    if(player->Agility() > enemy->Agility()){
        return true;       //player is faster than enemy
    }else{
        return false;     //player is slower than enemy
    }
}

bool CombatEV::playerMenu(Combat *combat, Inventory *inv, Character *player, Enemy* enemy) {
    bool eDead = false;
    string input;
    do {
        cout << "---------COMBAT MENU---------\n"
             << "1. Attack\n"
             << "2. View inventory\n";
        cin  >> input;
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n";
        if (input == "1") eDead = combat->DoPlayerCombat();
        else if (input == "2") inv->invMenu(player);
    } while (input != "1");
    return eDead;
}

void CombatEV::fight(Character *player, Enemy *enemy, Inventory *inv) {
    bool pDead = false, eDead = false;
    Combat *temp = new Combat(player,enemy);
    if (chckAgl(player,enemy)) {
        cout << "Because of your superior chrome, you attack first!\n";
        do {
        eDead = playerMenu(temp,inv,player,enemy);
        if (!eDead) pDead = temp->DoEnemyCombat();
        } while(!eDead and !pDead);
    }
    else {
        cout << "Arasaka chrome got the better of you this time so " << enemy->getName() << " attacks first!\n";
        do {
            pDead = temp->DoEnemyCombat();
            if (!pDead) eDead = playerMenu(temp,inv,player,enemy);
        } while(!eDead and !pDead);
    }
    delete temp;
    if (pDead) {
        cout << "You are Dead\n";
        cin.get();
        cout << "And so are all your dreams of that sweet, sweet lewt\n";
    }
}