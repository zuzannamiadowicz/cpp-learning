//
//  main.cpp
//  bin
//
//  Created by Zuzinka on 18/07/2017.
//  Copyright © 2017 Zuzinka. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;

string dec2bin(int n);
int bin2dec(string bin);



int main(int argc, const char * argv[]) {
  
  int n;
  string bin;
  
  cout << "Podaj liczbę: ";
  cin >> n;
  
  cout << dec2bin(n)<< endl;
  
  cout << "Podaj liczbę bin: ";
  cin >> bin;
  
  cout << bin2dec(bin)<<endl;
  
  return 0;
}

string dec2bin(int n) {
  string wynik = "";
  int x=n;
  
  do {
    if (x%2==0){
      wynik= "0" + wynik;
    } else {
      wynik= "1" + wynik;
    }
    x = x/2;
  } while(x>0);
  
  return wynik;
  
}

int bin2dec(string bin) {
  int n = bin.length();
  int sum=0;
  
  for (int i=0; i<n; i++) {
    if (bin[n-i-1]=='1'){
      sum+=1*pow(2,i);
    } else {
      sum+=0*pow(2,i);
    }
  }
  return sum;
}
