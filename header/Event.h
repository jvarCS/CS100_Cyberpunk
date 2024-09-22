#ifndef EVENT_H
#define EVENT_H
#include "Inventory.h"

struct Event {
        virtual void runEvent(Inventory *)=0;
};

#endif