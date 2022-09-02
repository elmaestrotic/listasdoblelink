//
// Created by Alexander on 1/09/2022.
//
#include <iostream>
#include "ListaDoblementeEnlazada.h"
using namespace std;

ListaDoblementeEnlazada::ListaDoblementeEnlazada(){
    this->head = nullptr;
}

// Insertar un nuevo nodo al inicio
void ListaDoblementeEnlazada::insert(int value){
    // Crear un nuevo nodo
    Nodo *node = new Nodo(value);
    node->next = this->head;
    // Cuando la lista no está vacía
    if (this->head != nullptr)
    {
        this->head->prev = node;
    }
    // Hacer que el nuevo nodo sea el Head
    this->head = node;
}

// Mostrar elementos de la lista doblemente enlazada
void ListaDoblementeEnlazada:: display()
{
    if (this->head == nullptr)
    {
        cout << "La lista está vacía" << endl;
    }
    else
    {
        cout << " Elementos de la lista doblemente enlazada:" << endl;
        // Obtener el primer nodo de la lista
        Nodo *temp = this->head;
        // iterate linked list
        while (temp != nullptr)
        {
            // Mostrar el valor del nodo
            cout << "  " << temp->data;
            // Visita el siguiente nodo
            temp = temp->next;
        }
    }
}