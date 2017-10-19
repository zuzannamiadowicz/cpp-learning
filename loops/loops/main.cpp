//
//  main.cpp
//  loops
//
//  Created by Zuzinka on 25/06/2017.
//  Copyright © 2017 Zuzinka. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int liczba;
unsigned long long int strzal;
int sum = 0;

int main(int argc, const char * argv[]) {
    
    cout<< "Witam, pomyślałam sobię liczbę z zakresu 1..100" << endl;
    srand(time_t(NULL));
    liczba = rand ()% 100+1;
    
    while ( liczba != strzal ) {
       cout << "Zgadnij jaką!";
        cin >> strzal;
        sum++;
        
        if (liczba == strzal)
        cout << "gratulacje, trafiłeś! (zgadłeś za " << sum << " podejściem)"<< endl;
        
        else if (liczba > strzal)
        cout << "Moja liczba jest większa (to twoje "<< sum << " podejście)"<< endl;
        
        else if (liczba < strzal)
        cout << "Moja liczba jest mniejsza (to twoje "<< sum << " podejście)" << endl;
        
        
        
    }
    return 0;
}





