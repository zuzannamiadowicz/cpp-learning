#include "dog.hpp"
#include <iostream>
#include "domestic_animal.hpp"

using namespace std;

void Dog::voice(){
    cout<<getName()<<": chau chau"<<endl;
};
void Dog::enter_data() {
    Domestic_animal::enter_data("psa");
}
