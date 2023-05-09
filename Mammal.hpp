#pragma once
#include "Animal.hpp"
class Mammal : public Animal{
    private:
        bool is_cloven_hoov;
        int leg_count;
    public:
        Mammal(bool is_cloven_hoov, int leg_count, string name);
        bool isClovenHoov();
        int getLegCount();

};