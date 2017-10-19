//
//  main.cpp
//  odwrotne
//
//  Created by Zuzinka on 27/06/2017.
//  Copyright © 2017 Zuzinka. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int liczby[5];
    int sum = 0;
    
    
    for (int i=0; i<5; i++){
        cout << "Podaj " << i+1 << " liczbę: ";
        cin >> liczby[i];
    }
    
    for(int i=4; i>=0; i--) {
        cout << "liczba " << i+1 << " to: " <<  liczby[i] << endl;
        sum+= liczby[i];
    }
    cout << "suma podanych liczb to: " << sum << endl;
  
    
    
    
    return 0;
}
