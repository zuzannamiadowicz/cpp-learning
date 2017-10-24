#ifndef dog_hpp
#define dog_hpp

#include <iostream>
#include "domestic_animal.hpp"

using namespace std;

class Dog: public Domestic_animal {
    
public:
    void voice();
    void enter_data();
    
};

#endif /* dog_hpp */

