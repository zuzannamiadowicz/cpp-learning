//
//  main.cpp
//  pole figury
//
//  Created by Zuzinka on 25/10/2017.
//  Copyright © 2017 Zuzinka. All rights reserved.
//
#include "shape.hpp"
#include "square.hpp"
#include "circle.hpp"
#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
   
    Circle k(1);
    Square kw(2);
    
    Shape* wsk;
    wsk=&k;
    wsk->calculate_area();
    
    wsk=&kw;
    wsk->calculate_area();
    
    return 0;
}
