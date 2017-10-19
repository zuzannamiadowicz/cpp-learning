//
//  main.cpp
//  choinka duża
//
//  Created by Zuzinka on 09/07/2017.
//  Copyright © 2017 Zuzinka. All rights reserved.
//

#include <iostream>
using namespace std;


void rysujSegment(int h, int margin);
void rysujKorzen(int h, int margin);
void rysujChoinke(int segmenty);

int main(int argc, const char * argv[]) {
    
//    int poziomy = 0;
//    cout << "Ile poziomów ma mieć choinka?";
//    cin >> poziomy;
//    rysuj(poziomy);
   
    rysujChoinke(4);
    
    return 0;
}

void rysujSegment(int h, int margin) {
    for (int i=0; i<h;i++) {
        for (int j=h+margin; j>i; j--){
            cout << " ";
        }
        for (int y=0; y<=i*2; y++){
            cout << "*";
        }
        cout <<endl;
        
    }
}

void rysujKorzen( int h, int margin) {
    for (int i=0; i<h; i++){
        for (int y=0; y<h+margin; y++){
            cout<< " ";
        }
        for (int j=0; j<3; j++){
            cout << "*";
        }
        cout << endl;
    }
}

void rysujChoinke(int segmenty) {
    for(int i=1; i<=segmenty; i++) {
        rysujSegment(i*3, (segmenty - i)*3);
    }
    
    rysujKorzen(3, ((segmenty - 1)*3)-1);
}
