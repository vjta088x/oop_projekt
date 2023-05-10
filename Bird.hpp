#pragma once
#include "Animal.hpp"
class Bird : public Animal{
    private:
        int wing_length;
    public:
        Bird(int wing_length, string name);
        int getWingLength();
        virtual bool canFly();
};