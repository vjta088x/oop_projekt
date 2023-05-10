#include "Parrot.hpp"
Parrot::Parrot(string color, int wing_length, string name) : Bird(wing_length, name){
    this->color = color;
}
string Parrot::getColor(){
    return this->color;
}
void Parrot::makeSound(){
    cout << "Squawk squawk" << endl;
}