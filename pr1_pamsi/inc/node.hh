#ifndef NODE_HH_INCLUDED
#define NODE_HH_INCLUDED

/*
 * Plik zawiera szablon klasy SNode, ktora implementuje element w liscie
 */


template<class E>
class SNode{
private:
  E elem;    // obiekt przechowywany w strukturze
  SNode<E> *next;    // wskaznik na nastepny element struktury
public:
  /*
   *get Element() - zwraca obiekt przechowywany w strukturze
   */
  E getElement() { return elem; }

  /*
   *getNext() - zwraca wskaznik na nastepny element w strukturze
   */
  SNode* getNext() { return next; }

  /*
   *setElement() - ustawia dane obiektu
   */
  void setElement(E newE) { elem = newE; }

  /*
   * setNext() - ustawia wskaznik na nastepny element
   */
  void setNext(SNode<E>* newN) { next = newN;}

  /*
   * konstruktor - ustawia wskaznik na nastepny element na nullptr
   */
  SNode(){next = nullptr;}
};


#endif // NODE_HH_INCLUDED
