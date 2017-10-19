#ifndef zwierze_hpp
#define zwierze_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class Zwierze {
  
private:
  string name;
  int years;
  int weight;
  int height;
  
public:
  void enter_data();
  void show();
};




#endif /* zwierze_hpp */
