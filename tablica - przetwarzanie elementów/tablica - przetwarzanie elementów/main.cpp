//
//  main.cpp
//  tablica - przetwarzanie elementów
//
//  Created by Zuzinka on 28/06/2017.
//  Copyright © 2017 Zuzinka. All rights reserved.


#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int n;
    
    cout<<"Ile liczb chcesz uzyskać?";
    cin >> n;
    
    for (int i=1; i<=n; i++){
        int tmp = i;
        
        if (tmp%2 == 0){
            tmp += 100;
        }
        
        cout<< tmp << endl;
    }
    
    return 0;
}
