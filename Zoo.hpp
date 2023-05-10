#include "Animal.hpp"
#include "Mammal.hpp"
#include "Parrot.hpp"
#include "Giraffe.hpp"
#include "Lion.hpp"
using namespace std;

class Zoo{
    private:
        int max_members;
        int animal_count;
        Animal** animal_list;
    public:
        Zoo();
        ~Zoo();
        
        //Add animal to zoo (array)
        void addAnimal(Animal* animal);
        //Prints all animals in zoo
        void printAll();
        Animal* getByName(string name);
        Animal** getAnimals();

        Mammal* createMammal(bool is_cloven_hoov, int leg_count, string name);
        
        Parrot* createParrot(string color, int wing_length, string name);
        Giraffe* createGiraffe(int height, bool is_cloven_hoov, int leg_count, string name);
        Lion* createLion(int height, bool is_cloven_hoov, int leg_count, string name);
};