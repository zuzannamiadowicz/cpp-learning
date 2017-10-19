//
//  main.cpp
//  switch
//
//  Created by Zuzinka on 06/07/2017.
//  Copyright © 2017 Zuzinka. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <stdio.h>
using namespace std;

int main(int argc, const char * argv[]) {
    char wybor;
    float ilość;
    float razem=0;
    
    cout<<endl;
    cout<<"PRODUKTY:"<<endl;
    cout<<"-------------"<<endl;
    cout<<"1.Ziemniaki - 2zł/kg"<<endl;
    cout<<"2.Marchewka - 3zł/kg"<<endl;
    cout<<"3.Ser żółty - 25zł/kg"<<endl;
    cout<<"4.Masło - 5zł/kostka"<<endl;
    cout<<"5.Chleb - 2,50zł/bochenek"<<endl;
    cout<<"6.Koniec zakupów"<<endl;
    cout<<endl;
    
    for(;;) {
        cout<<endl;
        cout<<"Wybierz produkt:";
        cin>>wybor;
        
        float sum=0;
        switch (wybor) {
            case '1':
                cout<< endl<< "ZIEMNIAKI"<< endl;
                cout<<"Podaj ilość:";
                cin>> ilość;
                sum = ilość*2;
                cout << endl << "razem zł: " << sum << endl;
                razem+=sum;
                break;
            case '2':
                cout << endl << "MARCHEWKA" << endl;
                cout<<"Podaj ilość:";
                cin>>ilość;
                sum=ilość * 3;
                cout << endl << "razem zł:" << sum <<endl;
                razem+=sum;
                break;
            case '3':
                cout<<endl<<"SER ŻÓŁTY"<<endl;
                cout<<"Podaj ilość:";
                cin>>ilość;
                sum=ilość * 25;
                cout<<endl<<"razem zł:"<<sum<<endl;
                razem+=sum;
                break;
            case '4':
                cout<<endl<<"MASŁO"<<endl;
                cout<<"Podaj ilość:";
                cin>>ilość;
                sum=ilość * 5;
                cout<<endl<<"razem zł:"<<sum<<endl;
                razem+=sum;
                break;
            case '5':
                cout<<endl<<"CHLEB"<<endl;
                cout<<"Podaj ilość:";
                cin>>ilość;
                sum=ilość * 2.5;
                cout<<endl<<"razem zł:"<<sum<<endl;
                razem+=sum;
                break;
            case '6':
                cout<<"-------------------"<<endl;
                cout<<"Koniec zakupów";
                cout<<endl<<"Suma: "<<razem<< "zł"<<endl;
                
                exit(0);
                break;
            default:
                cout<<"Nie ma takiego produktu";
                
        }
    }
    
    return 0;
}
