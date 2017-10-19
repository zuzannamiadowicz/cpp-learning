
#ifndef kot_hpp
#define kot_hpp

#include <stdio.h>
#include "zwierze.hpp"
#include <iostream>

using namespace std;

class Kot: public Zwierze {
private:
  string breed;
  string owner_name;
  
public:
  void voice();
  void add_data();
  
};

#endif /* kot_hpp */
