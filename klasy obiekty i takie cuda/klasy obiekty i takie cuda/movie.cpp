
#include "movie.hpp"
#include <iostream>
using namespace std;

Movie::Movie(string title,int year,string director,int duration) {
    this->title = title;
    this->year = year;
    this->director = director;
    this->duration = duration;
    this->rate=0;
    this->votes=0;
}

void Movie::show() {
    cout<<title<<endl<<rate<<endl;
}
double Movie::grade(int mark){
    if(mark<0 || mark>5) {
        cout<<"Nieprawidłowa wartość"<<endl;
        return NULL;
    }
    
    rate=(rate*votes+mark)/(votes+1);
    votes++;
    
   return rate;
}


