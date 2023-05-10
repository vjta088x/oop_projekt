#include "Bird.hpp"

bool Bird::canFly(){
    return true;
}

Bird :: Bird(int wing_length, string name):Animal(name){
    this->wing_length = wing_length;
}
int Bird::getWingLength(){
    return this->wing_length;
}