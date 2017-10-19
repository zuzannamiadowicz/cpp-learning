#include "List.hpp"
#include <iostream>
using namespace std;

Lista::Lista() {
    this->head = NULL;
    this->tail = NULL;
}

void Lista::push_front(int value) {
    
    Element* el = new Element;
    
    el->value = value;
    el->next = NULL;
    el->next = this->head;
    
    this->head = el;
    
    if ((el->next) == NULL) {
        this->tail = el;
    } else if ((el->next) != NULL) {
        el->next->prev = el;
    }
}

void Lista::print_list(){
    Element* tmp = this->head;
    cout<<"LISTA:"<<endl;
    
    if (tmp == NULL) {
        cout<<"lista jest pusta"<<endl;
    } else {
        while (tmp!=NULL) {
            cout<<tmp->value<<endl;
            tmp=tmp->next;
        }
    }
}

bool Lista::empty() {
    
    return this->head == NULL;
    
}

int Lista::list_size() {
    
    int size = 0;
    Element* tmp = this->head;
    
    if (tmp == NULL) {
        cout<<"0"<<endl;
    }else {
        do {
            size++;
        } while((tmp = tmp->next)!=NULL);
    }
    return size;
}

bool Lista::search(int search_number) {
    bool find = false;
    Element* tmp = this->head;
    while (tmp!=NULL) {
        if (tmp->value == search_number) {
            find = true;
            break;
        }
        tmp = tmp->next;
    }
    return find;
}

void Lista::push_back(int value) {
    Element* tmp = this->head;
    
    if (tmp == NULL) {
        Element* el = new Element;
        el->value = value;
        this->head = el;
        this->tail = el;
    } else {
        Element* el = new Element;
        el->value = value;
        tmp = this->tail;
        tmp->next = el;
        el->next = NULL;
        el->prev = tmp;
        this->tail = el;
    }
}

int Lista::pop_back() {
    int deleted = 0;
    
    Element* tmp = this->head;
    
    if (tmp == NULL) {
        cout<<"Lista pusta"<<endl;
        return 0;
        
    } else if (tmp->next == NULL) {
        
        deleted = tmp->value;
        this->head = NULL;
        this->tail = NULL;
        
        delete tmp;
        
    } else {
        tmp = this->tail;
        deleted = tmp->value;
        tmp->prev->next = NULL;
        this->tail = tmp->prev;
        delete tmp;
    }
    return deleted;
}

int Lista::pop_front() {
    int deleted = 0;
    
    if (this->head == NULL) {
        cout<< "lista jest pusta"<<endl;
        return 0;
    }
    
    Element* tmp = this->head;
    deleted = tmp->value;
    this->head = tmp->next;
    delete tmp;
    
    return deleted;
}

void Lista::sort() {
    Element* tmp = this->head;
    while(tmp->next != NULL) {
        Element* tmp1 = this->head;
        
        while (tmp1->next != NULL) {
            if (tmp1->value > tmp1->next->value) {
                int test = tmp1->value;
                tmp1->value = tmp1->next->value;
                tmp1->next->value = test;
            }
            tmp1 = tmp1->next;
        }
        tmp = tmp->next;
    }
    print_list();
}

