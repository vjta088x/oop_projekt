#pragma once
#include <iostream>
//Truly abstract class
using namespace std;
class AbstractAnimal{
    protected:
        int id;
        string name;

    public:
        virtual void makeSound() = 0;
        virtual bool canFly() = 0;

};