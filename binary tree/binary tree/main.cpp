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
    baobab->add(7);
    baobab->add(24);
    baobab->add(4);
    baobab->add(10);
    baobab->add(3);
    baobab->add(5);
    baobab->add(22);
    baobab->add(9);
    baobab->add(21);
    baobab->add(26);

   
    cout<<"Min: "<<baobab->min()<<endl;
    cout<<"Max: "<<baobab->max()<<endl;
    
    cout<<"in-order"<<endl;
    baobab->in_order();
    cout<<endl;
    
    cout<<"pre-order"<<endl;
    baobab->pre_order();
    cout<<endl;
    
    cout<<"post-order"<<endl;
    baobab->post_order();
    cout<<endl;
    
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
