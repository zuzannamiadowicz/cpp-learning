

#include <iostream>
using namespace std;


struct Element {
    int value;
    Element* next;
};

struct List {
    Element* head;
    Element* tail;
};


void read_and_prepend();
void print_list();

List my_list; 
int main(int argc, const char * argv[]) {
    
    my_list.head = NULL;
    my_list.tail = NULL;
    
    
    int size = 0;
    cout<<"Ile chcesz wczytac? "<<endl;
    cin>>size;
    
    
    for (int i=0; i<size; i++) {
        read_and_prepend();
    }
    
    print_list();
    
    return 0;
}


void read_and_prepend() {
    Element* el = new Element;
    
    cout<<"Podaj wartosc"<<endl;
    cin>>el->value;
    
    el->next = NULL;
    
    el->next = my_list.head;
    my_list.head = el;
    
}

void print_list() {
    Element* tmp = my_list.head;
    cout<<"Wartości:"<<endl;
    do {
        cout<<" "<< tmp->value;
    } while((tmp = tmp->next)!=NULL);
    
    cout<<endl;
}
