#include "../header/Combat.h"
#include <iostream>

bool Combat::DoPlayerCombat(){
    double attackDamage = player->weapon->Damage();

    if (player->Luck() > (rand() % 13)){
        attackDamage += player->weapon->CriticalDamage();
        cout << "CRIT!\n";
    }

    cout << "You dealt " << attackDamage << " damage to " << enemy->getName() << "!\n";
    enemy->SetCurrentHealth(max((enemy->CurrentHealth() - (float)attackDamage), (float)0.0));
    cout << enemy->getName() << " now has " << enemy->CurrentHealth() << " HP\n\n\n";

    if (enemy->CurrentHealth() <= 0){
        return true;
    }

    return false;
}

bool Combat::DoEnemyCombat(){
    double attackDamage = enemy->weapon->Damage();

    if (enemy->Luck() > (rand() % 13)){
        attackDamage += enemy->weapon->CriticalDamage();
        cout << "ENEMY CRIT!\n";
    }

    cout << enemy->getName() << " dealt " << attackDamage << " damage to you!\n";
    player->SetCurrentHealth(max((player->CurrentHealth() - attackDamage), 0.0));
    cout << "You now have " << player->CurrentHealth() << " HP\n\n\n";

    if (player->CurrentHealth() <= 0){
        return true;
    }

    return false;
}