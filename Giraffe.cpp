#include "Giraffe.hpp"
Giraffe::Giraffe(int height, bool is_cloven_hoov, int leg_count, string name) : Mammal(is_cloven_hoov, leg_count, name){
    this->height = height;
}
int Giraffe::getHeight(){
    return this->height;
}
void Giraffe::makeSound(){
    cout << "Hiss Mooss Hiss" << endl;
}