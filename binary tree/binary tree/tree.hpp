#ifndef tree_hpp
#define tree_hpp
#include <iostream>
#include "element.hpp"
using namespace std;

class Tree {
    
private:
    Element* root;
    bool isLeft(Element* element);
    bool isRoot(Element* element);
    
public:
    Tree();
    void add (int value);
    void print();
    bool contains(int value);
    int min();
    int max();
    Element *get_element(int value);
    Element *get_min(Element* element);
    Element *succesor(Element* element);
    void remove(Element* element);
    void in_order();
    void in_order(Element* element);
    void pre_order();
    void pre_order(Element* element);
    void post_order();
    void post_order(Element* element);
};

#endif /* tree_hpp */
