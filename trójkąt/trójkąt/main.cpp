//
//  main.cpp
//  trójkąt
//
//  Created by Zuzinka on 29/06/2017.
//  Copyright © 2017 Zuzinka. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int w = 5;
    
    for (int i=1; i<=w; i++) {
        for (int j=0; j<i; j++) {
            cout<<pow(2,i)+j<<" ";
        }
        
        cout<<endl;
    }
    
    return 0;
}
