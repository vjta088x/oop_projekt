#pragma once
#include <iostream>

using namespace std;
class AbstractAnimal{
    protected:
        int id;
        string name;

    public:
        virtual void makeSound() = 0;

};