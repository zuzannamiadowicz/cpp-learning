//
//  main.cpp
//  tablice
//
//  Created by Zuzinka on 26/06/2017.
//  Copyright © 2017 Zuzinka. All rights reserved.
//

#include <iostream>
using namespace std;

int liczby [10];
int sum = 0;
int srednia;

int main(int argc, const char * argv[]) {
    
    cout << "Podaj mi 10 wybranych liczb" << endl;
    
    for (int i=1; i <= 10; i++){
        cout << endl << "Podaj liczbę " << i  << ": ";
        cin >> liczby[i];
        sum += liczby[i];
        cout << endl << "Suma wpisanych liczb wynosi: "<< sum << endl;
    }
    
    return 0;
}
