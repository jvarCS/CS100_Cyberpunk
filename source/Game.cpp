#include <iostream>
#include "../header/Game.h"
#include "../header/Story.h"
#include "../header/Character.h"
#include "../header/CharacterData.h"
#include "../header/CharacterStats.h"
#include "../header/Enemy.h"
#include "../header/EnemyData.h"
#include "../header/EnemyStats.h"
#include "../header/Item.h"
#include "../header/Weapon.h"
#include "../header/Consumable.h"
#include "../header/Event.h"
#include "../header/LootEv.h"
#include "../header/Combat.h"
#include "../header/CombatEV.h"
#include "../header/Inventory.h"
#include "../header/CreateChar.h"

using namespace std;

Game::Game() {
   story = new Story();
   inv = new Inventory();
}

bool Game::runGame() {
    prologue();
    if (!floorOne()) return false;
    else if (!(floorTwo())) return false;
    else if (!(floorThree())) return false;
    epilogue();
    return true;
}

void Game::prologue() {
    story->importantInfo();
    story->intro();
    story->actOne();
    setChar();
}

bool Game::floorOne() {
    story->actTwo(player);
    story->actThree(player);
    if (combat("Arasaka Cylon", 1, 4, 5, genEnemXP(),20,10)) loot();
    else return false;
    story->breakOne();
    if (combat("Arasaka Specialist", 2, 5, 5, genEnemXP(),30,20) and combat("Arasaka Bodyguard", 2, 5, 5, genEnemXP(),30,20)) loot();
    else return false;
    return true;
}

bool Game::floorTwo() {
    story->actFour(player);
    if (combat("Arasaka Chrome Jockie", 2, 6, 5, genEnemXP(), 30, 30)) loot();
    else return false;
    if (combat("Arasaka Armored Enforcer", 3, 4, 4, genEnemXP(), 40, 10)) loot();
    else return false;
    story->actFive(player);
    return true;
}

bool Game::floorThree() {
    story->actSix();
    if (!combat("Adam Smasher", 5, 9, 7, 0, 70, 30)) return false;
    return true;
}

void Game::epilogue() {
    story->actSeven(player);
}


double Game::genEnemXP() {
    double temp = (rand() % 10) + 1;
    return temp/10;
}


//CHARACTER RELATED FUNCTIONS
void Game::setChar() {
    CreateChar *tempPlayer = new CreateChar();
    player = tempPlayer->makeChar(inv);
    tempPlayer->setWeapon(inv,player);
    delete tempPlayer;
}

bool Game::isDead(Enemy *enemy) {
    if (player->CurrentHealth() == 0) {
        delete enemy;
        return true;
    }
    return false;
}

void Game::levelUp(Enemy *enemy) {
    if (player->AddExperience(enemy->getExp())) {
        cout << "---------------LEVEL UP-----------------\n";
        string tempLvl;
        CreateChar *temp = new CreateChar();
        cout << "PREVIOUS STATS\n"
             << "VIT " << player->Vitality() << "\n"
             << "AGIL " << player->Agility() << "\n"
             << "STR " << player->Strength() << "\n"
             << "LUCK " << player->Luck() << "\n";
        temp->setStats(tempLvl,true,player,inv);  
        delete temp;
    }
    delete enemy;
}

bool Game::combat(string name, int v, int a, int l, double xp, int dmg, int crit) {
    Enemy *enemy = new Enemy(name, v, a, l, xp);
    CombatEV *tempCom = new CombatEV(player,enemy);
    enemy->equipWeapon(dmg, crit);
    tempCom->runEvent(inv);
    delete tempCom;
    if (!isDead(enemy)) {levelUp(enemy); return true;}
    else return false;
}

void Game::loot() {
    LootEV *tempLoot = new LootEV();
    tempLoot->runEvent(inv);
    delete tempLoot;
}

//-------------DESTRUCTOR

Game::~Game() {
    cout << "GAME DESTRUCTOR\n";
    delete story;
    delete player;
    delete inv;
}