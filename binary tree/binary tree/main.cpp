//
//  main.cpp
//  binary tree
//
//  Created by Zuzinka on 08/11/2017.
//  Copyright © 2017 Zuzinka. All rights reserved.
//

#include <iostream>
#include "tree.hpp"
using namespace std;


int main(int argc, const char * argv[]) {
 
    Tree* baobab = new Tree();
    
    baobab->add(3);
    baobab->add(2);
    baobab->add(4);
    baobab->add(5);
    baobab->add(6);
    cout<<"end"<<endl;
    return 0;
}
