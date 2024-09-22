#ifndef ITEM_H
#define ITEM_H
#include <string>

using namespace std;

class Item {
    private:
        string name;
        string description;
    public:
        Item(string _name, string _description) : name(_name), description(_description) {}
        string Description();
        string Name();
};

#endif
