//
//  main.cpp
//  sort
//
//  Created by Zuzinka on 09/08/2017.
//  Copyright © 2017 Zuzinka. All rights reserved.
//

#include <iostream>
using namespace std;

void sort(int tab[], int n, bool asc);
void sortAsc(int tab[], int n);
void sortDesc(int tab[], int n);

int main(int argc, const char * argv[]) {
    int n;
    
    cout<<"Ile liczb?";
    cin>>n;
    
    int tab[n];
    
    cout<<endl<<"Podaj losowych "<< n <<" liczb: ";
    for(int i=0; i<n; i++){
        cout<<endl<<i+1<<".";
        cin>>tab[i];
    }
    
    sortAsc(tab, n);
    
    for (int i=0; i<n; i++){
        cout<< tab[i]<<endl;
    }
    
    
    cout<<endl;
    
    sortDesc(tab, n);
    
    for (int i=0; i<n; i++){
        cout<<tab[i]<<endl;
    }
    
    return 0;
}

void sort(int tab[], int n, bool asc) {
    int box;
    
    for(int i=0; i<n; i++ ){
        for(int j=0; j<=i; j++){
            if (((asc==true) && (tab[j]>tab[i])) || ((asc==false) && (tab[j]<tab[i]))) {
                box = tab[j];
                tab[j]=tab[i];
                tab[i]=box;
            }
        }
    }
}

void sortAsc(int tab[], int n) {
     sort(tab, n, true);
}

void sortDesc(int tab[], int n) {
    sort(tab, n, false);
}
