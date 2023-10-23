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
    //Nodo<T> *cola;
    //int conta;
public:
    Lista();
    ~Lista();
    void incluirPrincipio(T nodoN);
    void borrar(T nodoB);
    void incluirFinal(T nodoN);
    void mostrar();
//friend ostream& operator<<(ostream& os, const Nodo<T> *nodo);
};



#endif //CLASES06_09LISTA_LISTA_H
