#include "element.hpp"
#include <iostream>
using namespace std;

Element::Element(int v){
    this->parent = NULL;
    this->left = NULL;
    this->right = NULL;
    this->value = v;
}

