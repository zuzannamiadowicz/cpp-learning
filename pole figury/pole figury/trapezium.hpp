
#ifndef trapezium_hpp
#define trapezium_hpp
#include "shape.hpp"
#include <stdio.h>
#include <iostream>
using namespace std;

class Trapezium :public Shape {
private:
    float basis_a;
    float basis_b;
    float side_c;
    float side_d;
    float height;
public:
    Trapezium(float a, float b, float h, float c, float d);
    virtual void calculate_area();
    virtual void calculate_perimeter();
};




#endif /* trapezium_hpp */
