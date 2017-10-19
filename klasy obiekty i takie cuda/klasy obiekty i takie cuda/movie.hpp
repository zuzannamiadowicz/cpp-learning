
#ifndef movie_hpp
#define movie_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class Movie {
    
public:
    
    Movie(string title,int year,string director,int duration);
    void show();
    double grade(int mark);
    
private:
    
    string title;
    int year;
    string director;
    int duration;
    double rate;
    int votes;
    
    
    
};

#endif /* movie_hpp */
