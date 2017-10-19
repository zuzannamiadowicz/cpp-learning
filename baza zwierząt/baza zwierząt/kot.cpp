//
//  kot.cpp
//  baza zwierząt
//
//  Created by Zuzinka on 18/10/2017.
//  Copyright © 2017 Zuzinka. All rights reserved.
//

#include "kot.hpp"
#include <iostream>
#include "zwierze.hpp"

using namespace std;

Kot::Kot(string n, int y, int w, int h, string b, string on):Zwierze(n,y,w,h) {
    this->breed = b;
    this->owner_name = on;
}
void Kot::add_data(){
    
    Zwierze::enter_data();

    string breed;
    string owner_name;
    
    cout<<"Podaj rasę zwierzęcia: "<<endl;
    cin>>breed;
    cout<<"Podaj imię właściciela: "<<endl;
    cin>>owner_name;
}
void Kot::voice(){
    cout<<"Miau miau"<<endl;
    
    

};
