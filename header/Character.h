/*
    Author: Justin Dang
    >--------------------------------------------
    Need help?
        -> Refer to my test cases on some examples of how to use this class.
    >--------------------------------------------
    FUNCTION:
        -> Handles storing and modifying data and stats of an character.
    >--------------------------------------------
    Documentation:
        - Constructor:
            -> Character(string name, Path origin, struct characterData)
            -> Character(string name, 
                            Path origin,
                            int _level = 0, double _health = 100.0,
                            int _vitality = 0, int _strength = 0, int _agility = 0, int _luck = 0, int _psychosis = 0, 
                            double _experience = 0.0)
                - Side note for above constructor:
                    -> I left experience at the end to all for the constructor to be
                        called as so:
                            Character(name, path/race, level, health);
                        Can omit experience and it will be set to 0.
                    -> The least you have to do to create a character is Character(name, path/race, level).
                        -> Hp is set to 100, but stats will be set at 0.
                    -> Path is similar to a race. Up for iteration if need be.

        - Variables:
            -> name
            -> origin
            -> level
            -> experience
            -> currentHealth
            -> maxHealth
            -> characterData { 
                int level;
                double currentHealth, experience = 0
                }
            -> Struct that contain all data just here if developer wishes to 
                handle data differently

            -> vitality
            -> strength
            -> agility
            -> luck
            - characterStats { int vitality, strength, agility, luck }
            -> Struct that contain all data just here if developer wishes to 
                handle data differently
            
            -> weapon

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
#ifndef CHARACTER_H
#define CHARACTER_H
#include "../header/CharacterData.h"
#include "../header/CharacterStats.h"
#include "Weapon.h"
#include <algorithm>
#include <string>

using namespace std;

class Character : public CharacterData, public CharacterStats{
    public:
        enum Path {
            Corporate,
            Nomad,
            Street_Kid
            // Other races go here:
            // Sushi,
            // Pizza hut,
            // helpme.exe
        };

        /*
        (string name, Path origin, 
        characterData data(struct),
        characterStats stats(struct))
        */ 
        Character(string _name, Path _origin, characterData _data, CharacterStats _stats) : 
        CharacterData(_data), 
        CharacterStats(_stats)
        {
            name = _name;
            origin = _origin;

            // Modify Hp based on vitality stat
            SetMaxHealth((double)(100 * Vitality()));
            SetCurrentHealth(MaxHealth());
        }
        /*
        (string name, Path origin, 
        int level, double startingHP, double startingXP,
        int vitality, int strength, int agility, int luck) 
        */
        Character(string _name, Path _origin,
         int startingLevel = 0, double startingHP = 100.0,
         int _vitality = 0, int _strength = 0, int _agility = 0, int _luck = 0, 
         double startingExperience = 0.0) :
         CharacterData(startingLevel, startingHP, startingExperience), 
         CharacterStats(_vitality, _strength, _agility, _luck)
        {
            name = _name;
            origin = _origin;

            // Modify Hp based on vitality stat
            SetMaxHealth((double)(100 * Vitality()));
            SetCurrentHealth(MaxHealth());
        }
        //----------------------------------------------------------------
        
        // Methods
        void SetName(string name);
        string Name();
        void SetOrigin(Path path);
        Path Origin();

        // Public Data types
        Weapon *weapon;
    private:
        Path origin;
        string name;
};

#endif