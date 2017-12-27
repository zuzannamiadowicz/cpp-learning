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
    baobab->add(12);
    baobab->add(5);
    baobab->add(24);
    baobab->add(3);
    baobab->add(10);
    baobab->add(2);
    baobab->add(1);
    baobab->add(8);
    baobab->add(9);
    baobab->add(7);
    baobab->add(11);
    baobab->add(18);
    baobab->add(17);
    baobab->add(21);
    baobab->add(19);
    baobab->add(20);
    baobab->add(22);
    baobab->add(23);
    baobab->add(30);
    baobab->add(34);
    baobab->add(39);
    baobab->add(37);
    cout<<"Min: "<<baobab->min()<<endl;
    cout<<"Max: "<<baobab->max()<<endl;
    
    int tmp = 18;
    if (baobab->contains(tmp)) {
        Element *my_element = baobab->get_element(tmp);
        Element *następnik = baobab->succesor(my_element);
        if (następnik == NULL) {
            cout<<"nie ma następnika"<<endl;
        } else
            cout<<następnik->value<<endl;
        
        baobab->remove(my_element);
        cout<<"Contains: "<<baobab->contains(tmp)<<endl;
    }
    
    
    cout<<"end"<<endl;
    return 0;
}
