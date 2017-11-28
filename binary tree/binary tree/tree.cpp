#include "tree.hpp"
#include <iostream>
#include "element.hpp"
using namespace std;

Tree::Tree(){
    this->root = NULL;
}

void Tree::add(int value) {
    Element* new_element = new Element(value);
    if (this->root == NULL) {
        this->root = new_element;
    } else {
        Element* current_element = root;
        do{
            if(current_element->value >= new_element->value) {
                if (current_element->left == NULL){
                    current_element->left = new_element;
                    new_element->parent = current_element;
                    break;
                } else {
                    current_element = current_element->left;
                }
            } else {
                if (current_element->right == NULL) {
                    current_element->right = new_element;
                    new_element->parent = current_element;
                    break;
                } else {
                    current_element = current_element->right;
                }
            }
        } while (true);
    }
}

