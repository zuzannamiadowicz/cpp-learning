#ifndef tree_hpp
#define tree_hpp
#include <iostream>
#include "element.hpp"
using namespace std;

class Tree {
    
private:
    Element* root;
    
public:
    Tree();
    void add (int value);
    void print();
    bool contains(int value);
    int min();
    int max();
    Element *get_element(int value);
};

#endif /* tree_hpp */
