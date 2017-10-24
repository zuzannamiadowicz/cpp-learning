#include "domestic_animal.hpp"
#include "animal.hpp"

void Domestic_animal::enter_data(string class_name){
   
    Animal::enter_data(class_name);
    
    cout<<"Podaj rasę "<< class_name<<": "<<endl;
    cin>>breed;
    cout<<"Podaj imię właściciela: "<<endl;
    cin>>owner_name;
}

void Domestic_animal::show(){
    Animal::show();
    cout<<"Rasa: "<<breed<<endl;
    cout<<"Imię właściciela: "<<owner_name<<endl;
}
