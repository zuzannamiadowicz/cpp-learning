//
//  Car.cpp
//  klasy obiekty i takie cuda
//
//  Created by Zuzinka on 12/10/2017.
//  Copyright © 2017 Zuzinka. All rights reserved.
//

#include "Car.hpp"
#include <iostream>

using namespace std;

Car::Car(string vendor, int y, int d, string c) {
    this->vendor = vendor;
    this->year = y;
    this->doors = d;
    this->color = c;
    this->fuel_level = 0;
}

void Car::repaint(string new_color) {
    this->color = new_color;
}

void Car::beep(){
    cout<<"beeeeep beep beeeep "<<this->vendor<<endl;
}

void Car::refuel(int liters){
    fuel_level+=liters;
}

void Car::presentation(){
    cout<<this->vendor<<endl;
    cout<<this->year<<endl;
    cout<<this->doors<<endl;
    cout<<this->color<<endl;
}

void Car::drive(){
    if(fuel_level>0){
        cout<<"jedziem"<<endl;
        fuel_level--;
    } else {
        cout<<"brak paliwa"<<endl;
    }
}
