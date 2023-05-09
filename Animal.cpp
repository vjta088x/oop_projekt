#include "Animal.hpp"

int Animal::obj_count = 0;

Animal::Animal(string name):AbstractAnimal(){
    Animal::obj_count ++;
    this->id = obj_count;
    this->name = name;
}
int Animal::getId(){
    return this->id;
}
string Animal::getName(){
    return this->name;
}
string Animal::getAnimalType(){
    return "animal";
}
void Animal::makeSound(){
    printf("");
}