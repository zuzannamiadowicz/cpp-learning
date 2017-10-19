//
//  main.cpp
//  choinka
//
//  Created by Zuzinka on 28/06/2017.
//  Copyright © 2017 Zuzinka. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    
    int n = 10;
    
    for (int z=0; z<n; z++) {
        
        for ( int w=n; w>=z; w--){
            cout << " ";
        }
        for (int j=0; j<=z*2; j++) {
            
            cout << "#";
        }
        cout << endl;
    }
    
    
    for ( int i=0; i<=3; i++){
        
        for (int c=0; c<n; c++){
            cout << " ";
        }
        
        for ( int a=0; a<=3; a++){
            cout << "#";
        }
        
        
        cout << endl;
    }
    
    
    return 0;
    
}
