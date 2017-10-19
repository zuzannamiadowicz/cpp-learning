//
//  main.cpp
//  stos
//
//  Created by Zuzinka on 16/08/2017.
//  Copyright © 2017 Zuzinka. All rights reserved.
//

#include <iostream>
using namespace std;

const int STACK_MAX_SIZE = 6;
int stack[STACK_MAX_SIZE];
int current_size=0;

void push();
void pop();
void size_stack();
void empty();
void show_stack();

int main(int argc, const char * argv[]) {
  int choice;
  
  do{
    
    cout<<"--------------"<<endl;
    cout<<"MENU GŁÓWNE"<<endl;
    cout<<"------------------------------------"<<endl;
    cout<<"1. Dodaj element na szczycie stosu."<<endl;
    cout<<"2. Usuń element ze szczytu stosu."<<endl;
    cout<<"3. Sprawdź ile elementów jest na stosie."<<endl;
    cout<<"4. Sprawdź czy stos jest pusty."<<endl;
    cout<<"5. Zakończ program."<<endl;
    
    cout<<"Twój wybór: ";
    cin>>choice;
    
    switch (choice)
    {
      case 1:
        push();
        show_stack();
        break;
        
      case 2:
        pop();
        show_stack();
        break;
        
      case 3:
        size_stack();
        break;
        
      case 4:
        empty();
        break;
        
      case 5:
        break;
        
      default:
        cout<<"Niepoprawna wartość"<<endl;
        break;
    }
    
  } while(choice!=5);
  
  
  return 0;
  
}

void push() {
  if(current_size + 1 < STACK_MAX_SIZE) {
    current_size=current_size+1;
    
    cout<<endl<<"Jaką liczbę chcesz położyć na stos? ";
    cin>>stack[current_size];
  }else {
    cout<<endl<<"Stos jest pełny"<<endl;
  }
}

void show_stack() {
  
  //system("clear");
  
  if(current_size==0){
    cout<<"---------------"<<endl;
    cout<<"Stos jest pusty."<<endl;
    cout<<"---------------"<<endl;
  }else {
    
    cout<<endl<<"STOS"<<endl;
    for(int i=current_size; i>=1; i--) {
      cout<<stack[i]<<endl;
    }
  }
}

void pop() {
  if(current_size>=1) {
    current_size=current_size-1;
  } else {
    cout<<endl<<"Stos jest pusty!"<<endl;
  }
}

void size_stack() {
  cout<<"Liczba elementów na stosie to: "<<current_size<<endl;
}

void empty() {
  if(current_size==0){
    cout<<endl<<"Stos jest pusty."<<endl;
  }else{
    cout<<endl<<"Stos nie jest pusty, liczba elementów na stosie to: "<<current_size<<endl;
  }
}



