#include "Lion.hpp"
Lion::Lion(int height, bool is_cloven_hoov, int leg_count, string name) : Mammal(is_cloven_hoov, leg_count, name){
    this->height = height;
}
int Lion::getHeight(){
    return this->height;
}
void Lion::makeSound(){
    cout << "Roar Roaarr" << endl;
}