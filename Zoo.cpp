#include "Zoo.hpp"

Zoo::Zoo(){
    this->max_members = 255;
    this->animal_count = 0;
    this->animal_list = new Animal*[this->max_members];

}
Zoo::~Zoo(){
    for(int i = 0; i < this->animal_count; i++){
        delete this->animal_list[i];
    }
    delete[] this->animal_list;
}
void Zoo::addAnimal(Animal * animal){
    if(this->animal_count < this->max_members){
        this->animal_list[this->animal_count] = animal;
        cout << "Adding animal " << animal->getName() << " with id " << animal->getId() << " to zoo." << endl;
        animal_count ++;
    }else{
        cout << "Could not add animal, maximum capacity exceed" << endl;
    }
}
Animal* Zoo::getByName(string name){
    for(int i = 0 ; i < this->animal_count; i ++){
        if (animal_list[i]->getName() == name) {
            cout << "Returning animal object with name: " <<name<<endl;
            return animal_list[i];
        }
    }
    return nullptr;
}
Animal ** Zoo::getAnimals(){
    return this->animal_list;
}

Mammal * Zoo::createMammal(bool is_cloven_hoov, int leg_count, string name) {
    Mammal* animal = new Mammal(is_cloven_hoov, leg_count, name);
    
    cout << "Creating generic mammal with cloven hooves? " << is_cloven_hoov << " "<< leg_count << " legs and name: "<< name << endl;
    addAnimal(animal);
    return animal;
}
Parrot* Zoo::createParrot(string color, int wing_length, string name){
    Parrot* parrot = new Parrot(color, wing_length, name);
    cout << "Creating parrot with " << color << " color, name " << name << " with wing length of " << wing_length << " cm" << endl;
    addAnimal(parrot);
    return parrot;
}

Giraffe* Zoo::createGiraffe(int height, bool is_cloven_hoov, int leg_count, string name){
    Giraffe* giraffe = new Giraffe(height, is_cloven_hoov, leg_count, name);
    cout << "Creating Giraffe with cloven hooves? " << is_cloven_hoov << " ;"<< leg_count << " legs and name: "<< name << " and height of " << height << " cm" << endl; 
    addAnimal(giraffe);
    return giraffe;
}

Lion* Zoo::createLion(int height, bool is_cloven_hoov, int leg_count, string name){
    Lion* lion = new Lion(height, is_cloven_hoov, leg_count, name);
    cout << "Creating Lion with cloven hooves? " << is_cloven_hoov << " ;"<< leg_count << " legs and name: "<< name << " and height of " << height << " cm" << endl; 
    addAnimal(lion);
    return lion;
}

void Zoo::printAll(){
    cout <<"---In zoo there are: ---" << endl;
    for(int i = 0 ; i < this->animal_count; i ++){
        Animal * animal = animal_list[i];
        cout << animal->getName() << " with id: " << animal->getId() <<endl; 
    }
}