#ifndef QUEUE_HH_INCLUDED
#define QUEUE_HH_INCLUDED
#include "node.hh"

/*
 * Plik zawiera szablon klasy Queue, ktora jest implementacja kolejki
 */

template<class E>
class Queue{
private:
  SNode<E> *head;    //wskaznik na pierwszy element kolejki, tzw. "glowa"
  SNode<E> *tail;    //wskaznik na ostatni element kolejki, tzw. "ogon"
  int elements;      //biezaca ilosc elementow w kolejce
public:
  /*
   *konstruktor - ustawia wskazniki head i tail na nullptr, a elements na 0
   */
  Queue();
  
  /*
   *destruktor - zwalnia pamiec na koniec dzialania programu, o ile kolejka nie jest juz pusta
   */
  ~Queue();

  /*
   *isEmpty() - sprawdza, czy kolejka jest pusta
   *Zwraca:
   *  true - jezeli pusta
   *  false - jezeli zawiera choc jeden element
   */
  bool isEmpty() const{ return head == nullptr; }

  /*
   *append - dodaje element na koniec kolejki
   *Argument:
   *  E& e - referencja do obiektu, ktory ma byc dodany
   */
  void append(const E& e);

  /*
   *removeFront - usuwa pierwszy element w kolejce
   *Argument:
   *  E& e - referencja do miejsca, gdzie zapisze sie zdjety obiekt
   */
  void removeFront(E& e);

  /*
   *qcount - zwraca ilosc elementow w kolejce (elements)
   */
  int qcount() const{ return elements; }
};

template<class E>
Queue<E>::Queue(){
  head = nullptr;
  tail = nullptr;
  elements=0;
}

template<class E>
Queue<E>::~Queue(){
  if(!isEmpty()){
    SNode<E> *temporary;
    while(!isEmpty()){
      temporary = head;
      head = head->getNext();
      delete temporary;
    }
  }
}

template<class E>
void Queue<E>::append(const E& e){
  SNode<E> *add = new SNode<E>;
  add->setElement(e);
  elements++;
  if(isEmpty()){
      head = add;
  }else{
    tail->setNext(add);
  }
  tail=add;
}

template<class E>
void Queue<E>::removeFront(E& e){
   elements--;
   e = head->getElement();
   SNode<E> *temporary = head;
   head=head->getNext();
   delete temporary;
   if(isEmpty()){
       tail = nullptr;
   }
}



#endif // QUEUE_HH_INCLUDED
