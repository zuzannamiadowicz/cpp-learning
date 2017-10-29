#include "shape.hpp"
#include "square.hpp"
#include "trapezium.hpp"
#include "circle.hpp"
#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
   
    Circle c(1);
    Square sq(2);
    Trapezium t(5,8,4,3,4);
    
    Shape* wsk;
    wsk=&c;
    wsk->calculate_area();
    wsk->calculate_perimeter();
    
    wsk=&sq;
    wsk->calculate_area();
    wsk->calculate_perimeter();
    
    
    wsk=&t;
    wsk->calculate_area();
    wsk->calculate_perimeter();
    
    return 0;
}
