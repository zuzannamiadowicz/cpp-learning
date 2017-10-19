//
//  main.cpp
//  cyfry w liczbie
//
//  Created by Zuzinka on 05/07/2017.
//  Copyright © 2017 Zuzinka. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int liczba;
    int n=0;
    cout<<"Podaj liczbę: ";
    cin>>liczba;
    
    int tmp = liczba;
    do {
        tmp=tmp/10;
        n++;
    } while (tmp>0);
    cout<<n<<endl;
    
    cout << "suma cyfr w liczbie wynosi:";
    
    int sum=0;
    int tmp2=liczba;
    do {
        int b = tmp2 % 10;
        sum+=b;
        tmp2 = tmp2/10;
    } while ( tmp2>10);
    sum+=tmp2;
    cout<<sum<<endl;

    return 0;
}
