
#include "zwierze.hpp"

Zwierze::Zwierze(string n, int y, int w, int h) {
    this->name = n;
    this->years = y;
    this->weight = w;
    this->height = h;
   
}
void enter_data(){
    
    string name;
    int years;
    int weight;
    int height;
  
    cout<<"Podaj imię zwierzęcia: "<<endl;
    cin>>name;
    cout<<"Podaj wiek zwierzęcia: "<<endl;
    cin>>years;
    cout<<"Podaj wagę zwierzęcia: "<<endl;
    cin>>weight;
    cout<<"Podaj wzrost zwierzęcia: "<<endl;
    cin>>height;
}

void Zwierze::show(){
    cout<<"Imię: "<<name<<endl;
    cout<<"Wiek: "<<years<<endl;
    cout<<"Waga: "<<weight<<endl;
    cout<<"Wzrost: "<<height<<endl;
}
