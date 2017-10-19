//
//  main.cpp
//  kwadrat
//
//  Created by Zuzinka on 29/06/2017.
//  Copyright © 2017 Zuzinka. All rights reserved.
//

#include <iostream>
using namespace std;


int main(int argc, const char * argv[]) {
    
    int b;
    int a;
    
    
    cout << "podaj szerokość:";
    cin >> b;
    cout << endl << "podaj wysokość:";
    cin >> a;
   
    
    
    for (int i=1; i<=a; i++){
        
        for ( int j=1; j<=b; j++){
            
            if ((i==1) || (i==a)){
                cout << " * ";
            } else if ((j==1) || (j==b)){
                cout << " * ";
            } else {
                cout << "   ";
            }
           
        }
        cout<<endl;
        
        
        
        
    }
    return 0;
}
