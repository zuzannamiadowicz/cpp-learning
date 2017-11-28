#ifndef element_hpp
#define element_hpp

#include <iostream>
using namespace std;
class Element {
public:
    int value;
    Element* parent;
    Element* left;
    Element* right;
    

    Element(int v);
};

#endif /* element_hpp */
