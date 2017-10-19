#ifndef animal_hpp
#define animal_hpp

#include <iostream>
using namespace std;

class Animal {
  
private:
  string name;
  int years;
  int weight;
  int height;
  
public:
  void enter_data();
  void show();
};




#endif /* animal_hpp */
