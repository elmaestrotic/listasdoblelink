//
// Created by Alexander on 1/09/2022.
//

#ifndef LISTICAS2_LISTADOBLEMENTEENLAZADA_H
#define LISTICAS2_LISTADOBLEMENTEENLAZADA_H


#include "Nodo.h"

class ListaDoblementeEnlazada {
public: Nodo *head;
    ListaDoblementeEnlazada();
    // Insert new node at beginning position
    void insert(int value);

    // Display node element of doubly linked list
    void display();

};


#endif //LISTICAS2_LISTADOBLEMENTEENLAZADA_H
