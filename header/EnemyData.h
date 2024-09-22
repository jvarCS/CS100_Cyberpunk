#ifndef ENEMYDATA_H
#define ENEMYDATA_H
#include <string>
#include <algorithm>

using namespace std;

class EnemyData {
    private:
        float currHealth;
        float maxHealth;
        string name;
        float xp;       


    public:

        //getters and setters
        float MaxHealth();
        void SetMaxHealth(float hp);
        float CurrentHealth();
        void SetCurrentHealth(float hp);

        float getExp();
        void setExp(float _xp);


        void setName(string _name);
        string getName();



};

#endif