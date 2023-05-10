#pragma once
#include "Mammal.hpp"
using namespace std;
class Giraffe : public Mammal{
    private:
        int height;
    public:
        Giraffe(int height, bool is_cloven_hoov, int leg_count, string name);
        int getHeight();
        virtual void makeSound();
};