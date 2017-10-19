
#include "animal.hpp"

void Animal::enter_data() {
  cout<<"Podaj imię zwierzęcia: "<<endl;
  cin>>name;
  cout<<"Podaj wiek zwierzęcia: "<<endl;
  cin>>years;
  cout<<"Podaj wagę zwierzęcia: "<<endl;
  cin>>weight;
  cout<<"Podaj wzrost zwierzęcia: "<<endl;
  cin>>height;
}

void Animal::show(){
  cout<<"Imię: "<<name<<endl;
  cout<<"Wiek: "<<years<<endl;
  cout<<"Waga: "<<weight<<endl;
  cout<<"Wzrost: "<<height<<endl;
}
