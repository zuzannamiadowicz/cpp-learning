//
//  main.cpp
//  lp
//
//  Created by Zuzinka on 10/07/2017.
//  Copyright © 2017 Zuzinka. All rights reserved.
//

#include <iostream>
using namespace std;

bool isPrime(int liczba);
int ile(int liczba, int liczba2);

int main(int argc, const char * argv[]) {
    int liczba;
    
    
    cout << "Podaj swoją liczbę: ";
    cin >> liczba;
    cout << endl << "Czy "<<liczba<<" jest liczbą pierwszą?";
    bool result = isPrime(liczba);
    if (result) {
        cout << " Jest pierwsza"<<endl;
    } else {
        cout << " Nie, nie jest pierwsza"<<endl;
    }
    
    
    int liczba1, liczba2;
    
    cout<< "Podaj dwie liczby - początek i koniec przedziału:" << endl<< "1.";
    cin >> liczba1;
    cout <<endl<<"2.";
    cin >> liczba2;
    
    int wynik = ile(liczba1,liczba2);
    
    cout<< "W tym przedziale jest " << wynik << " liczb pierwszych.";
    return 0;
}


bool isPrime(int liczba) {
    bool prime = true;
    for (int i=2; i<liczba; i++){
        if(liczba%i==0) {
            prime = false;
            break;
        }
    }
    
    return prime;
}


int ile (int liczba, int liczba2){
    int sum = 0;
    
    for (int i=liczba; i<=liczba2; i++){
        bool result = isPrime(i);
        if (result){
            sum++;
        }
        
    }
    
    return sum;
}




