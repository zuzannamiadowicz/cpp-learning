#ifndef List_hpp
#define List_hpp
#include "Element.hpp"

class Lista {
    
private:
    Element* head;
    Element* tail;
    
public:
    Lista();
    void push_front(int value);
    void print_list();
    bool empty();
    int list_size();
    bool search(int search_number);
    void push_back(int value);
    int pop_front();
    int pop_back();
    void sort();
    
};





#endif /* List_hpp */
