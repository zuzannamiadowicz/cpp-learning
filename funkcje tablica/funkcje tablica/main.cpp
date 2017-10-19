//
//  main.cpp
//  funkcje tablica
//
//  Created by Zuzinka on 11/07/2017.
//  Copyright © 2017 Zuzinka. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;


void fill(int tab[], int n);
int max(int tab[], int n);
int min(int tab[], int n);
bool contains(int tab[], int n, int liczba);
int mean(int tab[], int n);

int main(int argc, const char * argv[]) {
  srand(time(NULL));
  
  int n=3;
  int tab[n];
  int liczba;
  
  
  fill(tab,n);
  
  int result_1 = max(tab,n);
  
  cout<< endl << "Największa to: "<< result_1 << endl;
  
  int result_2 = min(tab,n);
  cout << endl << "Najmniejsza to: "<< result_2 << endl;
  
  
  int result_3 = mean(tab,n);
  cout << endl << "Średnia to: " << result_3 << endl;
  
  
  cout << endl << "Podaj swoją liczbę: ";
  cin >> liczba;
  
  bool result = contains(tab,n,liczba);
  if  (result == true) {
    cout << " Jest  "<<endl;
  } else {
    cout << " Nie ma"<<endl;
  }
  
  return 0;
}


void fill(int tab[], int n) {
  for (int i=0; i<n; i++) {
    tab[i]=rand()%25+1;
    cout<<tab[i]<<endl;
  }
}


int max(int tab[], int n) {
  int biggest = tab[0];
  
  for(int i = 0; i<n; i++){
    if ( biggest < tab[i]){
      biggest = tab[i];
    }
  }
  return biggest;
}



int min ( int tab[], int n) {
  int smallest = tab[0];
  for(int i = 0; i<n; i++){
    if ( smallest > tab[i]){
      smallest = tab[i];
      
    }
  }
  return smallest;
}



bool contains(int tab[], int n, int liczba) {
  bool find = false;
  
  for(int i=0; i<n; i++) {
    if (tab[i]==liczba){
      find = true;
      break;
      
    }
  }
  return find;
}

int mean(int tab[], int n) {
  int sum=0;
  for (int i=0; i<n; i++){
    sum+=tab[i];
  }
  
  int mean=sum/n;
  
  return mean;
}
