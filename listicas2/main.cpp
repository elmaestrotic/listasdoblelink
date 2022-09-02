#include <iostream>
#include "ListaDoblementeEnlazada.h"

int main() {
    ListaDoblementeEnlazada *puntero = new ListaDoblementeEnlazada();
    // Insert following linked list nodes
    puntero->insert(70);
    puntero->insert(60);
    puntero->insert(50);
    puntero->insert(40);
    puntero->insert(30);
    puntero->insert(20);
    puntero->insert(10);
    //  NULL <- 10 <--> 20 <--> 30 <--> 40 <--> 50 <--> 60 <--> 70->NULL
    puntero->display();
    return 0;

}
