//
//  main.cpp
//  string
//
//  Created by Zuzinka on 22/07/2017.
//  Copyright © 2017 Zuzinka. All rights reserved.
//

#include <iostream>
using namespace std;

string shorter(string input);
string shorter2(string input);


int main(int argc, const char * argv[]) {
  
  string input ="ABBCCCDDDDEEEEEFGGHIIJKKKL";
  string desiredOutput = "ABBC3D4E5FGGHIIJK3L";
  
  cout << shorter(input) << " " << (shorter(input) == desiredOutput) << endl;
  
  cout << shorter2(input) << " " << (shorter2(input) == desiredOutput) << endl;
  
  return 0;
}

string shorter(string input) {
  
  long dlugosc = input.length();
  int sum=1;
  string new_string;
  
  for(int i=0; i<dlugosc; i++) {
    if (input[i] == input[i+1]) {
      sum++;
    } else if (sum == 1) {
      new_string += input[i];
      sum=1;
    } else if (sum == 2) {
      new_string += input[i];
      new_string += input[i];
      sum=1;
    } else {
      new_string += input[i] + to_string(sum);
      sum=1;
    }
  }
  
  return new_string;
}


string shorter2(string input) {
  string new_string;
  int sum=1;
  char last_char = input[0];
  
  for(int i=1; i<=input.length(); i++) {
    if (last_char != input[i]) {
      if (sum == 1) {
        new_string += last_char;
      } else if (sum == 2) {
        new_string += last_char;
        new_string += last_char;
      } else {
        new_string += last_char + to_string(sum);
      }
      
      sum = 1;
      last_char = input[i];
    } else {
      sum++;
    }
  }
  
  return new_string;
}
