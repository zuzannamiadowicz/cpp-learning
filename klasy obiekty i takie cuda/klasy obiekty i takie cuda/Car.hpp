//
//  Car.hpp
//  klasy obiekty i takie cuda
//
//  Created by Zuzinka on 12/10/2017.
//  Copyright © 2017 Zuzinka. All rights reserved.
//

#ifndef Car_hpp
#define Car_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

class Car {
public:
    Car(string vendor, int y, int d, string c);
    void repaint(string new_color);
    void beep();
    void refuel(int liters);
    void presentation();
    void drive();
    
private:
    string vendor;
    int year;
    int doors;
    string color;
    int fuel_level;
};

#endif /* Car_hpp */
