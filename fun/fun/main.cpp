//
//  main.cpp
//  fun
//
//  Created by Zuzinka on 18/07/2017.
//  Copyright © 2017 Zuzinka. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void fill(int tab[], int n);
bool the_same(int tab[], int n);
bool is_sorted (int tab[],int n);

int main(int argc, const char * argv[]) {
  
  srand(time(NULL));
  
  int n=3;
  int tab[n];
  
  fill(tab,n);
  
  bool result = the_same(tab,n);
  if  (result == true) {
    cout << " Jest  "<<endl;
  } else {
    cout << " Nie ma"<<endl;
  }
  
  bool result1 = is_sorted(tab,n);
  if  (result1 == true) {
    cout << " Jest  "<<endl;
  } else {
    cout << " Nie jest"<<endl;
  }
  return 0;
}

void fill(int tab[], int n) {
  for (int i=0; i<n; i++) {
    tab[i]=rand()%5+1;
    cout<<tab[i]<<endl;
  }
}

bool the_same( int tab[], int n) {
  bool find = false;
  
  for (int i=0; i<n && find==false; i++) {
    for (int j=i+1; j<n; j++) {
      if (tab[i] == tab[j]){
        find = true;
        break;
      }
    }
  }
  return find;
}

bool is_sorted (int tab[],int n) {
  bool sorted = true;
  
  for (int i=0; i<n-1; i++){
    if (tab[i]>tab[i+1]){
      sorted = false;
      break;
    }
  }
  
  return sorted;
}

