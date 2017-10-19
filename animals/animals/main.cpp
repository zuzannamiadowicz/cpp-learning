
#include <iostream>
#include "cat.hpp"
using namespace std;

int main(int argc, const char * argv[]) {

  Cat* fafik = new Cat();
  fafik->enter_data();
  fafik->show();
  fafik->voice();
  
  return 0;
}
