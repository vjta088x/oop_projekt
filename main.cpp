#include <iostream>
using namespace std;

#include "Mammal.hpp"

int main(){
    Mammal mammal(false, 4, "pepa");
    
    printf("Id: %d\n", mammal.getId());
}