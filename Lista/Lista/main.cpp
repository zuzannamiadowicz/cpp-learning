#include <iostream>
#include "List.hpp"
#include "Element.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
  Lista list;
  int choice;
  
  do{
    cout<<"--------------"<<endl;
    cout<<"MENU GŁÓWNE"<<endl;
    cout<<"------------------------------------"<<endl;
    cout<<"1. Dodaj element na początku listy ."<<endl;
    cout<<"2. Dodaj element na końcu listy ."<<endl;
    cout<<"3. Usuń element z początku listy."<<endl;
    cout<<"4. Usuń element z końca listy."<<endl;
    cout<<"5. Sprawdź ile elementów jest na liście."<<endl;
    cout<<"6. Sprawdź czy lista jest pusta."<<endl;
    cout<<"7. Znajdź element na liście."<<endl;
    cout<<"8. Pokaż listę."<<endl;
    cout<<"9. Sortuj rosnąco."<<endl;
    cout<<"10. Zakończ program."<<endl;
    
    cout<<"Twój wybór: ";
    cin>>choice;
    system("clear");
    
    switch (choice)
    {
      case 1:
        int value1;
        cout<<"Podaj wartość: "<<endl;
        cin>>value1;
        list.push_front(value1);
        break;
        
      case 2:
        int value2;
        cout<<"Podaj wartość: "<<endl;
        cin>>value2;
       list.push_back(value2);
        break;
        
      case 3:
        cout << "Usunięto liczbę: " << list.pop_front() << endl;
        break;
        
      case 4:
        cout << "Usunięto liczbę: " << list.pop_back() << endl;
        break;
        
      case 5:
        cout<<"Ilośc elementów listy to: "<< list.list_size() <<endl;
        break;
        
      case 6:
        if (list.empty()==true) {
          cout<<"Lista jest pusta"<<endl;
        }else {
          cout<<"Lista nie jest pusta"<<endl;
        }
        break;
        
      case 7:
        int search_number;
        cout<<"Jakiej liczby szukasz?"<<endl;
        cin>>search_number;
       
        if (list.search(search_number) == true) {
          cout<< endl << "Znaleziono"<<endl;
        }else {
          cout<<endl<<"Nie znaleziono"<<endl;
        }
        break;
        
      case 8:
        list.print_list();
        break;
        
      case 9:
        list.sort();
        break;
        
      case 10:
        break;
        
      default:
        cout<<"Niepoprawna wartość"<<endl;
        break;
    }
  } while(choice!=10);
  
  return 0;
}



