#pragma once
#include "Mammal.hpp"
using namespace std;
class Lion : public Mammal{
    private:
        int height;
    public:
        Lion(int height, bool is_cloven_hoov, int leg_count, string name);
        int getHeight();
        virtual void makeSound();
};