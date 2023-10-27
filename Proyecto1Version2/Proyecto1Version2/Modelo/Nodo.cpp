//
// Created by estudiante on 6/9/2023.
//

#include "Nodo.h"

template<class T>
Nodo<T>::Nodo() {
    siguiente=nullptr;
}

template<class T>
T Nodo<T>::getDato() {
    return dato;
}

template<class T>
void Nodo<T>::setDato(T datos) {
    dato=datos;
}

template<class T>
Nodo<T> *Nodo<T>::getSiguiente() {
    return siguiente;
}

template<class T>
void Nodo<T>::setSiguiente(Nodo *sigu) {
    siguiente=sigu;
}
