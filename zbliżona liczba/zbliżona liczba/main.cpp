//
//  main.cpp
//  zbliżona liczba
//
//  Created by Zuzinka on 03/08/2017.
//  Copyright © 2017 Zuzinka. All rights reserved.
//

#include <iostream>
using namespace std;

float mean (float tablica[]);
float similar_number (float tablica[], float mean);

int main(int argc, const char * argv[]) {
    
    float tablica[3];
    
    cout<<"Podaj 3 liczby: ";
    
    for(int i=0; i<3; i++) {
        cout << endl << i+1 <<".";
        cin >> tablica[i];
    }
    float result1 = mean(tablica);
    cout << endl <<"Średnia wynosi: "<< result1 << endl;
    cout << endl <<"Liczba najbliższa średniej to: "<< similar_number(tablica,result1) << endl;
    
    return 0;
}

float mean (float tablica[]) {
    float sum=0;
    for(int i=0; i<3; i++){
        sum+=tablica[i];
    }
    float mean=sum/3;
    
    return mean;
}

float similar_number (float tablica[], float mean) {
    
    float difference[3];

    for ( int i=0; i<3; i++) {
        difference[i]= mean-tablica[i];
        if(difference[i]<0){
            difference[i] = difference[i] * (-1);
        }
    }
    float number = difference[0];
    
    for (int i=1; i<3; i++) {
        if(number>difference[i])
            number=difference[i];
    }
    for (int i=0; i<3; i++){
        if (number==difference[i]){
            number=tablica[i];
            break;
        }
    }
    return number;
}




