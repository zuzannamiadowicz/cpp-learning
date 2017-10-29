#ifndef circle_hpp
#define circle_hpp

#include <stdio.h>
#include <iostream>
#include "shape.hpp"
using namespace std;

class Circle :public Shape {
private:
    float radius;
public:
    Circle(float r);
    virtual void calculate_area();
    virtual void calculate_perimeter();
};

#endif /* circle_hpp */
