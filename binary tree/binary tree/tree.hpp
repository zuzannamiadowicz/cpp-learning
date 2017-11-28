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
    
};

#endif /* tree_hpp */
