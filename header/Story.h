#ifndef STORY_H
#define STORY_H

#include "Character.h"

class Story {


    public:
        void newLine();
        void importantInfo();
        void intro();
        void actOne();
        void actTwo(Character *);
        void actThree(Character *);
        void breakOne();
        void actFour(Character *);
        void actFive(Character *);
        void actSix();
        void actSeven(Character *);
};

#endif