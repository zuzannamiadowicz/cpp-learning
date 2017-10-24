//
//  cat.cpp
//
//  Created by Zuzinka on 18/10/2017.
//  Copyright © 2017 Zuzinka. All rights reserved.
//

#include <iostream>
#include "cat.hpp"
#include "domestic_animal.hpp"

using namespace std;

void Cat::voice(){
  cout<<getName()<<": Miau miau"<<endl;
}

void Cat::enter_data() {
  Domestic_animal::enter_data("kota");
}
