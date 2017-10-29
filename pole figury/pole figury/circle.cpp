#include "circle.hpp"
#include "shape.hpp"
#include <iostream>
using namespace std;

Circle::Circle (float r) {
    this->radius=r;
}

void Circle::calculate_area(){
    cout<<"Pole koła: "<< 3.14*radius*radius <<endl;
}

void Circle::calculate_perimeter(){
    cout<<"Obwód koła: "<< 2*3.14*radius <<endl;
}

