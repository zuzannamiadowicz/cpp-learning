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
    Element *min_element = get_min(root);
    if (min_element == NULL) {
        return NULL;
    }
    
    return min_element->value;
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

bool Tree::isLeft(Element *element) {
    if (isRoot(element)) {
        return NULL;
    }
    
    if (element->parent->left==element) {
        return true;
    }
    return false;
}

bool Tree::isRoot(Element *element) {
    if (element==root) {
        return true;
    }
    return false;
}

void Tree::remove(Element *to_remove) {
    
    if (to_remove->right == NULL && to_remove->left == NULL) {
        // No children
        if (isRoot(to_remove)) {
            root = NULL;
        } else {
            if (isLeft(to_remove)) {
                to_remove->parent->right = NULL;
            } else {
                to_remove->parent->left = NULL;
            }
        }
        delete to_remove;
    } else if (to_remove->left != NULL && to_remove->right == NULL) {
        // Only left child
        if (isRoot(to_remove)){
            root=to_remove->left;
        } else {
            if (isLeft(to_remove)) {
                to_remove->parent->left=to_remove->left;
            } else {
                to_remove->parent->right=to_remove->left;
            }
        }
        to_remove->left->parent=to_remove->parent;
        delete to_remove;
    } else if (to_remove->right!=NULL && to_remove->left==NULL) {
        // Only right child
        if (isRoot(to_remove)){
            root=to_remove->right;
        } else {
            if (isLeft(to_remove)) {
                to_remove->parent->left=to_remove->right;
            } else {
                to_remove->parent->right=to_remove->right;
            }
        }
        to_remove->right->parent=to_remove->parent;
        delete to_remove;
        
    } else {
        // Both children
        Element* succesor = this->succesor(to_remove);
        
        if (isRoot(to_remove)){
            //ROOT
            if (root->right==succesor) {
                succesor->left = root->left;
                succesor->parent=NULL;
                root=succesor;
            } else {
                succesor->parent->left = succesor->right;
                
                if (succesor->right != NULL) {
                    succesor->right->parent = succesor->parent;
                }
                succesor->left = root->left;
                succesor->right = root->right;
                succesor->left->parent = succesor;
                succesor->right->parent = succesor;
                succesor->parent=NULL;
                root=succesor;
            }
            delete to_remove;
        } else {
            //SUCCESOR 1'ST LINE
            if (to_remove->right==succesor) {
                if (isLeft(to_remove)) {
                    to_remove->parent->left=succesor;
                } else {
                    to_remove->parent->right=succesor;
                }
                succesor->parent = to_remove->parent;
                succesor->left = to_remove->left;
                
                delete to_remove;
            } else {
                //SUCCESOR IN FURTHER LINES
                succesor->parent->left = succesor->right;
                if (succesor->right != NULL) {
                    succesor->right->parent = succesor->parent;
                }
                if (isLeft(to_remove)) {
                    to_remove->parent->left=succesor;
                } else {
                    to_remove->parent->right=succesor;
                }
                succesor->parent = to_remove->parent;
                succesor->left = to_remove->left;
                succesor->right = to_remove->right;
                succesor->left->parent = succesor;
                succesor->right->parent = succesor;
                
                delete to_remove;
            }
        }
    }
}
