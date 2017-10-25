#include "circle.hpp"
#include "shape.hpp"
#include <iostream>
using namespace std;

Circle::Circle (float x) {
    r=x;
}

void Circle::calculate_area(){
    cout<<"Pole koła: "<< 3.14*r*r <<endl;
}
