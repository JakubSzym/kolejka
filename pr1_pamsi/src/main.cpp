#include "queue.hh"
#include<iostream>
#include<cstdlib>

#define END 'e'
#define REMOVE 'r'

using namespace std;

int main(){
  system("clear");
  
  Queue<int> myQueue;   //tworze kolejke
  char choice=' ';      //zmienna przechowujaca wybor uzytkownika
  int number=1;         //liczba, ktora bedzie dodana do kolejki
  int read;             //zmienna, do ktorej bede zapisywal elementy zdejmowane z kolejki
  while(choice != END){
    if(choice == REMOVE){
      myQueue.removeFront(read);
      cout<<"Pobrano pierwszy element: "<<read<<endl;
    }else if(choice != END){
      cout<<"Brak wyboru"<<endl;
      } 
    //dodaje do kolejki losowa(miedzy 1 a 5) ilosc kolejnych liczb naturalnych
    for(int i=0;i<(rand()%5+1);i++){
      myQueue.append(number);
      number++;
    }
    cout<<"W kolejce jest "<<myQueue.qcount()<<endl;
    cout<<"MENU"<<endl;
    cout<<"r - pobiera pierwszy element w kolejce"<<endl;
    cout<<"e - zakoncz dzialanie programu"<<endl;		   
    cout<<"Wybor: "<<endl;
    cin>>choice;
    cin.clear();
    system("clear");
  }
}
