#ifndef domestic_animal_hpp
#define domestic_animal_hpp

#include <stdio.h>
#include <iostream>
#include "animal.hpp"

using namespace std;


class Domestic_animal: public Animal {

private:
    string breed;
    string owner_name;
    
public:
    void enter_data();
    void show();
};

#endif /* domestic_animal_hpp */
