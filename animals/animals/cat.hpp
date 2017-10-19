
#ifndef cat_hpp
#define cat_hpp

#include <iostream>
#include "domestic_animal.hpp"

using namespace std;

class Cat: public Domestic_animal {

public:
  void voice();

};

#endif /* cat_hpp */
