
#include <iostream>
#include "zwierze.hpp"
#include "kot.hpp"
using namespace std;

int main(int argc, const char * argv[]) {

  Kot* fafik = new Kot();
  fafik->add_data();
  fafik->show();
  
  return 0;
}
