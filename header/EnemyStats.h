#ifndef ENEMYSTATS_H
#define ENEMYSTATS_H

#include <algorithm>

using namespace std;

class EnemyStats{
    private:
        int vitality;
        int agility;
        int luck;

    public:
        EnemyStats(int _vitality = 0, int _agility = 0, int _luck = 0){
            this->vitality = max(_vitality, 0);
            this->agility = max(_agility, 0);
            this->luck = max(_luck, 0);
        }

        //getters and setters
        int Vitality();
        void SetVitality(int _vitality);
        int Agility();
        void SetAgility(int _agility);
        int Luck();
        void SetLuck(int _luck);
};



#endif







