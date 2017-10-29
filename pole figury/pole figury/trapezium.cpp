#include "trapezium.hpp"
#include <iostream>
using namespace std;

Trapezium::Trapezium(float a, float b, float h, float c, float d) {
    this->basis_a=a;
    this->basis_b=b;
    this->height=h;
    this->side_c=c;
    this->side_d=d;
    
}

void Trapezium::calculate_area(){
    cout<<"Pole trapezu: "<< ((basis_a+basis_b)*height)/2 <<endl;
}

void Trapezium::calculate_perimeter(){
    cout<<"Obwód trapezu: "<< side_d+side_c+basis_b+basis_a <<endl;
}
