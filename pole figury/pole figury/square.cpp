#include "square.hpp"
#include <iostream>
using namespace std;

Square::Square (float a) {
    this->side=a;
}

void Square::calculate_area(){
    cout<<"Pole kwadratu: "<< side*side <<endl;
}

void Square::calculate_perimeter(){
    cout<<"Obwód kwadratu: "<< 4*side <<endl;
}
