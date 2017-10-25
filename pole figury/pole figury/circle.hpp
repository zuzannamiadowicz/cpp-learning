#ifndef circle_hpp
#define circle_hpp

#include <stdio.h>
#include <iostream>
#include "shape.hpp"
using namespace std;

class Circle :public Shape {
private:
    float r;
public:
    Circle(float x);
    virtual void calculate_area();
};

#endif /* circle_hpp */
