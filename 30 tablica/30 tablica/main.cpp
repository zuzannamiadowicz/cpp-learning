//
//  main.cpp
//  30 tablica
//
//  Created by Zuzinka on 27/06/2017.
//  Copyright © 2017 Zuzinka. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int tablica[30];
    int n;
    int sum = 0;
    int ilość = 0;
    
    
    cout<< "Podaj ile liczb całkowitych chesz wpisać: ";
    cin >> n;
    
    
    if ((n<1)||(n>30)){
        cout << "Niepoprawna ilość liczb"<< endl;
        return 1;
    }
    
    for ( int i=0; i<n; i++){
        cout << endl << "Podaj " << i+1 << " liczbę: ";
        cin >> tablica[i];
        sum+=tablica[i];
    }
    
    float srednia = (float)sum/n;
    cout << endl <<"Średnia podanych liczb to: "<< srednia << endl;
    
    
    int smallest = tablica[0];
    
    for ( int i=1; i<n; i++) {
        if ( smallest > tablica[i]){
            smallest = tablica[i];
        }
    }
    
    cout << "najmniejsza liczba z podanych to: " <<  smallest << endl;
    
    for (int i=0; i<n; i++){
        if (smallest == tablica[i]){
            ilość ++;
                 }
        
    }
       cout << "najmniejsza liczba występuje " << ilość << " razy.";
        
    
    
    for (int i=0; i<n; i++){
        if (smallest<tablica[i]){
            
    }
    
    
    
    
    
    }
    
    return 0;
}
