/*
    Author: Justin Dang
    >--------------------------------------------
    FUNCTION:
        -> Handles storing and modifying stats for a player character.
    >--------------------------------------------
    Documentation:
        - Constructor:
            -> CharacterStats(struct characterData)
            -> CharacterStats(int vitality = 0, 
                            int strength = 0, 
                            int agility = 0,
                            int luck = 0)
        - Variables:
            -> vitality
            -> strength
            -> agility
            -> luck
            - characterStats { int vitality, strength, agility, luck }
                -> Struct that contain all data just here if developer wishes to 
                    handle data differently
        - Methods:
            - NOTE:
                Variables are lower case; to get the variable, just change
                it to uppercase and call method
                    ex. To get character level:
                        int characterLevel = character.Level();
            - <Variable>() 
                -> returns the variable.
            - Set<Variable>()
                -> sets the variable.
            - Add<Variable>(int/double amount)
                -> Can add or subtract a given amount from the given variable.
    >--------------------------------------------
*/
#ifndef CHARACTERSTATS_H
#define CHARACTERSTATS_H

#include <algorithm>

using namespace std;

// int vitality, strength, agility, luck
struct characterStats{
    int vitality, strength, agility, luck;
};

class CharacterStats{
    private:
        int vitality;
        int strength;
        int agility;
        int luck;
        //int psychosis;
        characterStats stats;

        // helper function
        void UpdateData();

    public:
        CharacterStats(characterStats _stats){
            this->vitality = max(_stats.vitality, 0);
            this->strength = max(_stats.strength, 0);
            this->agility = max(_stats.agility, 0);
            //this->compatibility = max(_stats.compatibility, 0);
            this->luck = max(_stats.luck, 0);
            //this->psychosis = max(_stats.psychosis, 0);
            stats = { this->vitality, this->strength, this->agility, this->luck };
        }
        CharacterStats(int _vitality = 0, int _strength = 0, int _agility = 0, int _luck = 0){
            this->vitality = max(_vitality, 0);
            this->strength = max(_strength, 0);
            this->agility = max(_agility, 0);
            //this->compatibility = max(_compatibility, 0);
            this->luck = max(_luck, 0);
            //this->psychosis = max(_psychosis, 0);
            stats = { this->vitality, this->strength, this->agility, this->luck };
        }
        // Vitality
        int Vitality();
        void SetVitality(int _vitality);
        void AddVitality(int _vitality);

        // Strength
        int Strength();
        void SetStrength(int _strength);
        void AddStrength(int _strength);

        //Agility
        int Agility();
        void SetAgility(int _agility);
        void AddAgility(int _agility);

        // Compatibility
        // int Compatibility();
        // void SetCompatibility(int _compatibility);
        // void AddCompatibility(int _compatibility);

        // Luck
        int Luck();
        void SetLuck(int _Luck);
        void AddLuck(int _Luck);

        // Psychosis
        // int Psychosis();
        // void SetPsychosis(int _Luck);
        // void AddPsychosis(int _Luck);
};

#endif