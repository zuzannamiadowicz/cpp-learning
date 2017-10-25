#include "square.hpp"
#include <iostream>
using namespace std;

Square::Square (float x) {
    a=x;
}

void Square::calculate_area(){
    cout<<"Pole kwadratu: "<< a*a <<endl;
}
