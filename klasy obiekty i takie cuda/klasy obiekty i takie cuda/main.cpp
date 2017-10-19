//
//  main.cpp
//  klasy obiekty i takie cuda
//
//  Created by Zuzinka on 11/10/2017.
//  Copyright © 2017 Zuzinka. All rights reserved.
//

#include <iostream>

#include "Car.hpp"
#include "movie.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    
    
    Movie* szalona_opona = new Movie("Szalona opona", 2012, "Stasiak", 1000000);
    szalona_opona->show();
    for(int i=0;i<5;i++){
        int ocena;
        cout<<"Podaj ocenę: ";
        cin>>ocena;
        szalona_opona->grade(ocena);
    }
    szalona_opona->show();
    
    //    Car* corsa = new Car("opel", 1994, 3, "granatowa łuszczyca");
    //
    //    Car* stilo = new Car("fiat", 2004, 5, "srebny");
    //
    //    corsa->presentation();
    //    corsa->beep();
    //    corsa->drive();
    //    corsa->refuel(2);
    //    corsa->drive();
    //
    //    stilo->presentation();
    //    stilo->beep();
    //    stilo->drive();
    //    stilo->drive();
    //    stilo->drive();
    
    
    return 0;
}
