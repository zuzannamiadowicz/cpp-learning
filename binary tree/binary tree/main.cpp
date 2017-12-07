//
//  main.cpp
//  binary tree
//
//  Created by Zuzinka on 08/11/2017.
//  Copyright © 2017 Zuzinka. All rights reserved.
//

#include <iostream>
#include "tree.hpp"
#include "element.hpp"
using namespace std;


int main(int argc, const char * argv[]) {
    
    Tree* baobab = new Tree();
    
    cout<<"Contains: "<<baobab->contains(6)<<endl;
    cout<<"Min: "<<baobab->min()<<endl;
    cout<<"Max: "<<baobab->max()<<endl;
    baobab->add(10);
    baobab->add(11);
    baobab->add(12);
   
    cout<<"Contains: "<<baobab->contains(7)<<endl;
    cout<<"Contains: "<<baobab->contains(6)<<endl;
    cout<<"Min: "<<baobab->min()<<endl;
    cout<<"Max: "<<baobab->max()<<endl;
    if (baobab->contains(10)) {
        Element *my_element = baobab->get_element(10);
        Element *następnik = baobab->succesor(my_element);
        if (następnik == NULL) {
            cout<<"nie ma następnika"<<endl;
        }else
            cout<<następnik->value<<endl;
    }
    
    cout<<"end"<<endl;
    return 0;
}
