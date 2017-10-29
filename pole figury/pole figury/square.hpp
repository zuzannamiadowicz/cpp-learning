#ifndef square_hpp
#define square_hpp
#include "shape.hpp"
#include <stdio.h>
#include <iostream>
using namespace std;


class Square :public Shape {
private:
    float side;
public:
    Square(float a);
    virtual void calculate_area();
    virtual void calculate_perimeter();
};


#endif /* square_hpp */
