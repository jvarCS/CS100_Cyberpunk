#include "../header/Character.h"
#include <string>

using namespace std;

void Character::SetName(string _name){
     this->name = _name;
}

string Character::Name(){
    return this->name;
}

void Character::SetOrigin(Path _path){
    this->origin = _path;
}

Character::Path Character::Origin(){
    return this->origin;
}