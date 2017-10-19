//
//  main.cpp
//  tabliczka
//
//  Created by Zuzinka on 05/07/2017.
//  Copyright © 2017 Zuzinka. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    
    int w=5;
    for (int i=-1; i<=w; i++){
        if ( i<0){
            cout<< " |";
        }else if ( i==0){
            cout<< "- ";
        } else {
            cout <<i<<"|";
        }
        for (int j=0; j<=w; j++){
            if (i==-1){
                cout<<j<<" ";
            }else if( i==0){
                cout<<"- ";
            } else {
                cout << i*j << " ";
            }
        }
        cout<<endl;
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
