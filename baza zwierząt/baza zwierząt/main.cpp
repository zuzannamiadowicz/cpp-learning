
#include <iostream>
#include "zwierze.hpp"
#include "kot.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    
    string name;
    int years = 0;
    int weight = 0;
    int height = 0;
    string breed;
    string owner_name;
    
    
    Kot* Fafik = new Kot(name, years, weight, height, breed, owner_name);
    Fafik->add_data();
    Fafik->show();
    
    return 0;
}
