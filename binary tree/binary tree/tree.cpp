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

bool Tree::contains(int value) {
    
    Element* current_element = root;
    
    while (current_element != NULL) {
        if (value == current_element->value) {
            return true;
        }
        if (value > current_element->value) {
            current_element = current_element->right;
        } else {
            current_element = current_element->left;
        }
    }
    
    return false;
}

int Tree::min() {
    int value = NULL;
    
    if (root == NULL) {
        return value;
    }
    
    Element* current_element = root;
    
    while(current_element->left != NULL) {
        current_element = current_element->left;
    }
    value = current_element->value;
    
    return value;
}


int Tree::max() {
    
    int value = NULL;
    
    if (root == NULL) {
        return value;
    }
    
    Element* current_element = root;
    
    while(current_element->right != NULL) {
        current_element = current_element->right;
    }
    value = current_element->value;
    
    return value;
}


Element* Tree::get_element(int value) {
    
    Element* current_element = root;
    
    while (current_element != NULL) {
        if (value == current_element->value) {
            return current_element;
        }
        if (value > current_element->value) {
            current_element = current_element->right;
        } else {
            current_element = current_element->left;
        }
    }
    
    return NULL;
}

Element* Tree::get_min(Element* element) {
    
    if (element == NULL) {
        return NULL;
    }
    Element* current_element = element;
    while(current_element->left != NULL) {
        current_element = current_element->left;
    }
    return current_element ;
}

Element* Tree::succesor(Element *element) {
    
    Element* current_element = element;
    
    if (current_element->right==NULL) {
        if (current_element == root) {
            return NULL;
        }
        while (current_element->parent->value < current_element->value && current_element->parent != root) {
            current_element= current_element->parent;
        }
        if (current_element->parent == root && root->value < current_element->value) {
            return NULL;
        } else {
            current_element = current_element->parent;
        }
        return current_element;
    } else {
        return this->get_min(current_element->right);
    }
    return NULL;
}
