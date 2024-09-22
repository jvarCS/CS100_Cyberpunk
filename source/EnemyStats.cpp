#include "../header/EnemyStats.h"
using namespace std;

int EnemyStats::Vitality(){
    return this->vitality;
}
void EnemyStats::SetVitality(int _vitality){
    this->vitality = max(_vitality, 0);
}
int EnemyStats::Agility(){
    return this->agility;
}
void EnemyStats::SetAgility(int _agility){
    this->agility = max(_agility, 0);
}
int EnemyStats::Luck(){
    return this->luck;
}
void EnemyStats::SetLuck(int _luck){
    this->luck = max(_luck, 0);
}