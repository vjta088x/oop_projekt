#include "Mammal.hpp"
Mammal::Mammal(bool is_cloven_hoov, int leg_count, string name):Animal(name){
    this->is_cloven_hoov = is_cloven_hoov;
    this-> leg_count = leg_count;
}
bool Mammal::isClovenHoov(){
    return this->is_cloven_hoov;
}
bool Mammal::canFly(){
    return false;
}