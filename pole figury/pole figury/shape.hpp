#ifndef shape_hpp
#define shape_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class Shape {
public:
    virtual void calculate_area()=0;
    virtual void calculate_perimeter()=0;
};
#endif /* shape_hpp */
