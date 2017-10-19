//
//  main.cpp
//  stringiii
//
//  Created by Zuzinka on 24/07/2017.
//  Copyright © 2017 Zuzinka. All rights reserved.
//

#include <iostream>
using namespace std;

bool palindrome(string input);
string cezar(string input, int offset);
string upper_or_lower_case(string input);
string upper_case(string input);
string lower_case(string input);


int main(int argc, const char * argv[]) {
  string input;
  
  cout << "Podaj swój wyraz: ";
  cin >> input;
  
  cout << endl << palindrome(input) << endl;
  cout << endl << cezar(input, 4) << endl;
  cout<< endl << upper_or_lower_case(input) << endl;
  cout<< endl << upper_case(input) << endl;
  cout<< endl << lower_case(input) << endl;
  
  return 0;
}


string upper_or_lower_case(string input) {
  long dlugosc = input.length();
  string new_input;
  
  char tab_upper[26];
  char tab_lower[26];
  
  for(int i=0; i<26; i++) {
    tab_upper[i]=(char)65+i;
    tab_lower[i]=(char)97+i;
  }
  for(int i=0; i<dlugosc; i++) {
    if(input[i]>=97 && input[i]<=122) {
      for(int j=0; j<26; j++) {
        if(input[i]==tab_lower[j]){
          new_input+=tab_upper[j];
          break;
        }
      }
    }else if (input[i]>=65 && input[i]<=90) {
      for(int j=0; j<26; j++) {
        if(input[i]==tab_upper[j]){
          new_input+=tab_lower[j];
          break;
        }
      }
    } else {
      new_input+=input[i];
    }
  }
  return new_input;
}


bool palindrome(string input) {
  bool correct_sequence=true;
  long dlugosc = input.length();
  
  for(int i=0; i<dlugosc/2; i++){
    if(input[i] != input[dlugosc - 1 - i]){
      correct_sequence=false;
    }
  }
  return correct_sequence;
}


string cezar(string input, int offset) {
  long dlugosc = input.length();
  
  for(int i=0; i<dlugosc; i++){
    int current_char = (int)input[i];
    if (current_char > 86 && current_char<=90){
      int the_rest = current_char + 4 - 90;
      current_char = 65 + the_rest;
    } else {
      current_char = current_char + 4;
    }
    if (current_char > 119){
      int the_rest = current_char + 4 - 119;
      current_char = 97 + the_rest;
    } else {
      current_char = current_char + 4;
    }
    input[i] = current_char;
  }
  return input;
}


string upper_case(string input) {
  long dlugosc = input.length();
  string input_upper;
  
  for(int i=0; i<dlugosc; i++){
    if(input[i]>='a' && input[i]<='z'){
      input_upper+=input[i]-32;
    }else{
      input_upper+=input[i];
    }
  }
  return input_upper;
}


string lower_case(string input) {
  long dlugosc = input.length();
  string input_lower;
  
  for(int i=0; i<dlugosc; i++){
    if(input[i]>='A' && input[i]<='Z'){
      input_lower+=input[i]+32;
    }else{
      input_lower+=input[i];
    }
  }
  return input_lower;
}



