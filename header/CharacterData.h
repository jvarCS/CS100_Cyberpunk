/*
    Author: Justin Dang
    >--------------------------------------------
    FUNCTION:
        -> Handles storing and modifying data and stats of an character.
    >--------------------------------------------
    Documentation:
        - Constructor:
            -> CharacterData(struct characterData)
            -> CharacterData(int _level = 0, 
                            double _currentHealth = 0.0, 
                            double _maxHealth = 0.0, 
                            double _experience = 0.0)
                - Side note for above constructor:
                    -> I left experience at the end to all for the constructor to be
                        called as so:
                            CharacterData(level, health);
                        Can omit experience and it will be set to 0.

        - Variables:
            -> level
            -> experience
            -> currentHealth
            -> maxHealth
            -> characterData { 
                int level;
                double currentHealth, maxHealth, experience = 0
                }
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
#ifndef CHARACTERDATA_H
#define CHARACTERDATA_H
#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

/* 
int level;
double maxHealth, currentHealth, experience = 0
*/
struct characterData {
    int level = 0;
    double maxHealth = 0, currentHealth = 0, experience = 0;
};

class CharacterData {
    private:
        int level;                  
        double experience;          
        double currentHealth;      
        double maxHealth;           
        //double armor;     
        characterData data;    

        // Helper functions
        bool CanLevelUp();
        void LevelUp();
        bool CanLevelDown();
        void LevelDown();   
        void UpdateData();   

    public:
        // (int _level, double _experience, double _currentHealth, double _maxHealth, double _armor)
        CharacterData(characterData _data){
            this->level = max(_data.level, 0);
            this->experience = max(_data.experience, 0.0);
            this->currentHealth = max(_data.maxHealth, 0.0);
            this->maxHealth = max(_data.maxHealth, 0.0);
            //this->armor = max(_data.armor, 0.0);
            data = { this->level, this->currentHealth, this->maxHealth, this->experience};
        }
        CharacterData( int _level = 0, double _maxHealth = 0.0, double _experience = 0.0){
            this->level = max(_level, 0);
            this->experience = max(_experience, 0.0);
            this->currentHealth = max(_maxHealth, 0.0);
            this->maxHealth = max(_maxHealth, 0.0);
            //this->armor = max(_armor, 0.0);
            data = { this->level, this->currentHealth, this->maxHealth, this->experience};
        }

        // Health functions:
        double MaxHealth();
        void SetMaxHealth(double hp);
        void AddMaxHealth(double hp);
        double CurrentHealth();
        void SetCurrentHealth(double hp);
        void AddCurrentHealth(double hp);

        // Experience functions
        double Experience();
        void SetExperience(double xp);
        bool AddExperience(double xp);

        // Level functions
        double Level();
        void SetLevel(int lvl);
        void AddLevel(int lvl);

        // Armor functions
        // double Armor();
        // void SetArmor(double _armor);
        // void AddArmor(double _armor);
};

#endif