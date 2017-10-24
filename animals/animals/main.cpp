
#include <iostream>
#include "cat.hpp"
#include "dog.hpp"
using namespace std;

int main(int argc, const char * argv[]) {

  Cat* fafik = new Cat();
  fafik->enter_data();
  fafik->show();
  fafik->voice();
  
  Dog* mundek = new Dog();
  mundek->enter_data();
  mundek->show();
  mundek->voice();
  return 0;
}
