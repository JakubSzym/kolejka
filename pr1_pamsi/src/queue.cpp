#include "queue.hh"

template<class E>
Queue<E>::Queue(){
   head = nullptr;
   rear = nullptr;
   elements=0;
}

template<class E>
Queue<E>::~Queue(){
  SNode<E> *temporary;
  while(head != nullptr){
     temporary = head;
     head = head->getNext();
     delete temporary;
  }
}

template<class E>
bool Queue<E>::isEmpty() const{
   return head != nullptr;
}

template<class E>
void Queue<E>::append(const E& e){
  SNode<E> *add = new SNode<E>;
  add->setElement(e);
  add->setNext(nullptr);
  elements++;
  if(head == nullptr){
      head = add;
  }else{
      rear->getNext()=add;
  }
  rear=add;
}

template<class E>
void Queue<E>::removeFront(E& e){
   e = head->elem;
   elements--;
   SNode<E> *temporary = head;
   head->setNext(head);
   delete temporary;
   if(elements==0){
       rear = nullptr;
   }
}

template<class E>
int Queue<E>::qcount() const{
   return elements;
}
