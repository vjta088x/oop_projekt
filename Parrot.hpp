#pragma once
#include "Bird.hpp"
using namespace std;
class Parrot : public Bird{
    private:
        string color;
    public:
        Parrot(string color, int wing_length, string name);
        string getColor();
        virtual void makeSound();
};