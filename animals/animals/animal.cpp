
#include "animal.hpp"

void Animal::enter_data(string class_name) {
  cout<<"Podaj imię "<< class_name<<": "<<endl;
  cin>>name;
  cout<<"Podaj wiek "<< class_name<<": "<<endl;
  cin>>years;
  cout<<"Podaj wagę "<< class_name<<": "<<endl;
  cin>>weight;
  cout<<"Podaj wzrost "<< class_name<<": "<<endl;
  cin>>height;
}

void Animal::show(){
  cout<<"Imię: "<<name<<endl;
  cout<<"Wiek: "<<years<<endl;
  cout<<"Waga: "<<weight<<endl;
  cout<<"Wzrost: "<<height<<endl;
}

string Animal::getName(){
  return name;
}
