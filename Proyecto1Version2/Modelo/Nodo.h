//
// Created by estudiante on 6/9/2023.
//

#ifndef CLASES06_09LISTA_NODO_H
#define CLASES06_09LISTA_NODO_H
#pragma once
#include <iostream>
#include <sstream>

using namespace std;
template <class T>

class Nodo {
private:
    T dato;
    Nodo *siguiente;
    //Nodo *anter;

public:
    Nodo();

    T getDato();
    void setDato(T datos);

    Nodo *getSiguiente();

    void setSiguiente(Nodo *sigu);


};



#endif //CLASES06_09LISTA_NODO_H
