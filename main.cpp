#include <iostream>
using namespace std;

#include "Mammal.hpp"
#include "Parrot.hpp"
#include "Zoo.hpp"
#include "Giraffe.hpp"
#include "Lion.hpp"
int main(){

    Zoo zoo;
    Mammal* mammal = zoo.createMammal(false, 4, "pepa");

    cout << "Getting mammal object from Animal* array by name" << endl;
    Mammal* nm = (Mammal*)zoo.getByName("pepa");

    cout << endl;

    Parrot* parrot = zoo.createParrot("black", 4, "Karel");

    cout << "Parrot sound" <<endl;
    parrot->makeSound();
     cout << endl;


    Giraffe* giraffe = zoo.createGiraffe(321, true, 4, "Lenka");

    cout << "Giraffe sound" <<endl;
    giraffe->makeSound();
     cout << endl;


    
    Lion* lion = zoo.createLion(140, false, 4, "Blesk");

    cout << "Lion sound" <<endl;
    lion->makeSound();
     cout << endl;

    cout << "Can lion fly??: " << (lion->canFly() ? "Yes he can" : "No he cannot") << endl;

    cout << "Can parrot fly??: " << (parrot->canFly() ? "Yes he can" : "No he cannot") << endl;

    cout << endl; 
    zoo.printAll();

}