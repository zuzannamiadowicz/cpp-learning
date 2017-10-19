//
//  main.cpp
//  test0
//
//  Created by Zuzinka on 24/06/2017.
//  Copyright © 2017 Zuzinka. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;


int main(int argc, const char * argv[]) {
    /* zad największa
     cout<<"wprowadź pierwszą cyfrę:";
     cin>>x;
     cout<<"wprowadź drugą cyfrę:";
     cin>>y;
     cout<<"wprowadź trzecią cyfrę:";
     cin>>z;
     
     
     if ((x >= y) && (x >= z)) {
     cout<<"Najwięsza cyfra to:"<<x<<endl;
     } else if ((z >= x) && (z >= y)) {
     cout<<"Najwięsza cyfra to:"<<z<<endl;
     } else if ((y >= x) && (y >= z)) {
     cout<<"Najwięsza cyfra to:"<<y<<endl;
     }
     
     if ((x == y) && (y ==z)) {
     cout<<"Wszytskie cyfry są równe"<<endl;
     }
     */
    int a,b,c;
    
    cout<<" Podaj A:";
    cin>>a;
    cout<<" Podaj B:";
    cin>>b;
    cout<<" Podaj C:";
    cin>>c;
    
    double delta = b*b-4*a*c;
    cout<<delta<<endl;
    
    
    if (delta > 0) {
        double x1 = (-b - sqrt(delta))/(2*a);
        cout<<"x1:"<<x1<<endl;
        double x2 = (-b + sqrt(delta))/(2*a);
        cout<<"x2:"<<x2<<endl;
    } else if ( delta < 0){
        cout<<"brak rozwiązania"<<endl;
    } else if (delta == 0){
        double x3 = -b / 2*a;
        cout<<"x1:"<<x3<<endl;
    }
    
    
    return 0;
}
