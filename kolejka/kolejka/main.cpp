
#include <iostream>
using namespace std;

const int QUEUE_MAX_SIZE = 6;
int queue[QUEUE_MAX_SIZE];
int current_size=0;

void push();
int pop();
void size_queue();
void empty();
void show_queue();


int main(int argc, const char * argv[]) {  
  int choice;
  
  do{
    cout<<"--------------"<<endl;
    cout<<"MENU GŁÓWNE"<<endl;
    cout<<"------------------------------------"<<endl;
    cout<<"1. Dodaj element do kolejki."<<endl;
    cout<<"2. Usuń element z kolejki."<<endl;
    cout<<"3. Sprawdź ile elementów jest w kolejce."<<endl;
    cout<<"4. Sprawdź czy kolejka jest pusta."<<endl;
    cout<<"5. Zakończ program."<<endl;
    
    cout<<"Twój wybór: ";
    cin>>choice;
    
    switch (choice)
    {
      case 1:
        push();
        show_queue();
        break;
        
      case 2:
        cout << endl << "Odrzucam element: " << pop() << endl;
        show_queue();
        break;
        
      case 3:
        size_queue();
        break;
        
      case 4:
        empty();
        break;
        
      case 5:
        break;
        
      default:
        cout<<"Niepoprawna wartość"<<endl;
        break;
    }
  } while(choice!=5);
  
  return 0;
  
}

void push() {
  if(current_size + 1 < QUEUE_MAX_SIZE) {
    current_size=current_size+1;
    
    cout<<endl<<"Jaką liczbę chcesz dodać do kolejki? ";
    cin>>queue[current_size];
  }else {
    cout<<endl<<"Kolejka jest pełna"<<endl;
  }
}

void show_queue() {
  
  if(current_size==0){
    cout<<"---------------"<<endl;
    cout<<"Kolejka jest pusta."<<endl;
    cout<<"---------------"<<endl;
  }else {
    
    cout<<endl<<"KOLEJKA"<<endl;
    for(int i=1; i<=current_size; i++) {
      cout<<queue[i]<<endl;
    }
  }
}

int pop() {
  int trash = queue[1];
  if(current_size>=1) {
    for(int i=1; i<=current_size; i++) {
      queue[i]=queue[i+1];
    }
    current_size=current_size-1;
  } else {
    cout<<endl<<"Kolejka jest pusta!"<<endl;
  }
  return trash;
}

void size_queue() {
  cout<<"Liczba elementów w kolejce to: "<<current_size<<endl;
}

void empty() {
  if(current_size==0){
    cout<<endl<<"Kolejka jest pusta."<<endl;
  }else {
    cout<<endl<<"Kolejka nie jest pusta, liczba elementów to: "<<current_size<<endl;
  }
}



