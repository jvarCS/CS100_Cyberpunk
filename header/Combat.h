/*
    Author: Justin Dang
    >--------------------------------------------
    Need help?
        -> Refer to my test cases on some examples of how to use this class.
    >--------------------------------------------
    FUNCTION:
        -> Handles attacks between a given player and enemy, accounting
            for criticals.
    >--------------------------------------------
    Documentation:
        - Constructor:
            -> Combat(Character *, Enemy *)
        - Variables:
            -> *player
            -> *enemy

        - Methods:
            DoCharacterCombat(): Processes player attack against enemy.
                -> Returns true if player kills enemy
            DoEnemyCombat(): Processes enemy attack against player.
            -    > Returns true if enemy kills player
    >--------------------------------------------
*/
#ifndef COMBAT_H
#define COMBAT_H

#include "../header/Character.h"
#include "../header/Enemy.h"


class Combat{
    private:
        Character *player;
        Enemy *enemy;

    public:
        Combat(Character *_player, Enemy *_enemy){
            this->player = _player;
            this->enemy = _enemy;
        }
        bool DoPlayerCombat();
        bool DoEnemyCombat();
};

#endif