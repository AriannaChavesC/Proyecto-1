//
// Created by estudiante on 6/9/2023.
//

#ifndef CLASES06_09LISTA_LISTA_H
#define CLASES06_09LISTA_LISTA_H

#pragma once
#include <iostream>
#include <sstream>
#include "Nodo.cpp"

using namespace std;
template <class T>
class Lista {
private:
    Nodo<T> *raiz;
public:
    Lista();
    ~Lista();
    void incluirPrincipio(T nodoN);
    void borrar(T nodoB);
    void incluirFinal(T nodoN);
    void mostrar();
};



#endif //CLASES06_09LISTA_LISTA_H
