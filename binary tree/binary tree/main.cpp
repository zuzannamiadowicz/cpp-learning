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
    baobab->add(3);
    baobab->add(2);
    baobab->add(4);
    baobab->add(5);
    baobab->add(6);
    baobab->add(13);
    baobab->add(-3);
    cout<<"Contains: "<<baobab->contains(7)<<endl;
    cout<<"Contains: "<<baobab->contains(6)<<endl;
    cout<<"Min: "<<baobab->min()<<endl;
    cout<<"Max: "<<baobab->max()<<endl;
    if (baobab->contains(5)) {
        Element *my_element = baobab->get_element(5);
    }
    
    cout<<"end"<<endl;
    return 0;
}
