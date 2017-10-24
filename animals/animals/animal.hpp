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
  void enter_data(string class_name);
  void show();
  string getName();
};




#endif /* animal_hpp */
