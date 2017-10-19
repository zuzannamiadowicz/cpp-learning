//
//  main.cpp
//  funkcje
//
//  Created by Zuzinka on 19/07/2017.
//  Copyright © 2017 Zuzinka. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
#include <time.h>


using namespace std;

void complete(int tab[], int n);
int the_same(int tab[], int n, int toto[]);
bool find(int tab[], int n, int number);
int select(int tab[], int n);
int prize(int contain);


int main(int argc, const char * argv[]) {
  srand(time(NULL));
  
  int n=6;
  int tab[n];
  int toto[n];
  char choice;
  
  do{
    select(toto,n);
  
    cout << endl << "Wynik losowania to: "<< endl;
    complete(tab,n);
    
    int sum = the_same(tab,n,toto);
    
    cout << endl << "Twój wynik to: "<< sum << endl;
    cout << endl << "Wygrana: "<< prize(sum) << " zł" << endl;
    
    cout << endl << "Czy chcesz kontynuować? Y/N";
    
    cin.clear();
    cin.ignore(10000,'\n');
    
    choice = cin.get();
    
  } while(choice=='y' || choice =='Y');
  
  return 0;
}

int select(int toto[],int n){
  
  cout<< endl << "Wybierz 6 liczb z zakresu 1-49";
  for(int i=0; i<n; i++) {
    cout << endl << "Liczba " << i+1 << ": ";
    cin >> toto[i];
    
    while (toto[i] > 49 || toto[i] < 1){
      cout << "Liczba spoza zakresu" << endl;
      cout << endl << "Liczba " << i+1 << ": ";
      cin >> toto[i];
    }
    
    while(find(toto, i, toto[i]) == true) {
      cout << "Wartość nie może się powtarzać" << endl;
      cout << endl << "Liczba "<< i+1 << ": ";
      cin >> toto[i];
    }
  }
  
  return toto[n];
}


void complete(int tab[],int n) {
  for (int i=0; i<n; i++){
    int newValue;
    do {
      newValue = rand() % 49 + 1;
    } while(find(tab, i, newValue) == true);
    
    tab[i] = newValue;
    cout<<tab[i]<<endl;
  }
}


int the_same(int tab[], int n, int toto[]) {
  int sum=0;
  
  for (int i=0; i<n; i++){
    for (int j=0; j<n; j++){
      if (tab[i]==toto[j]){
        sum++;
      }
    }
  }
  
  return sum;
}


bool find(int tab[], int n, int number){
  bool contain=false;
  for (int i=0; i < n; i++){
    if (tab[i] == number){
      contain = true;
    }
  }
  
  return contain;
}


int prize(int sum){
  float gain=0;
  
  if (sum==6){
    gain = 5457400.90;
  } else if(sum == 5){
    gain = 4926.80;
  } else if(sum == 4){
    gain = 225.80;
  } else if(sum == 3){
    gain = 24.00;
  }else {
    gain = 0;
  }
  
  return gain;
}


