#pragma once
#include "AbstractAnimal.hpp"
class Animal : public AbstractAnimal{
    public:
        Animal(string name);

        static int obj_count;

        int getId();
        string getName();
        virtual string getAnimalType();
        virtual void makeSound();
};