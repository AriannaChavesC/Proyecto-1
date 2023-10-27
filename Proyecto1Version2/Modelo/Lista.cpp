//
// Created by estudiante on 6/9/2023.
//

#include "Lista.h"


template<class T>
Lista<T>::Lista() {
    raiz= nullptr;
}
template<class T>
Lista<T>::~Lista() {
    while (raiz){
        Nodo<T> *elim=raiz;
        raiz=raiz->getSiguiente();
        delete elim;
    }
}


template<class T>
void Lista<T>::incluirPrincipio(T nodoN) {
    Nodo<T> *nuevo= new Nodo<T>();
    nuevo->setDato(nodoN);
    nuevo->setSiguiente(raiz);
    raiz = nuevo;
}

template<class T>
void Lista<T>::borrar(T nodoB) {
    Nodo<T>* nodoAc = raiz;
    Nodo<T>* anter = nullptr;
    while (nodoAc) {
        if (nodoAc->getDato() == nodoB) {
            if (anter) {
                anter->setSiguiente(nodoAc->getSiguiente());
            } else {
                raiz = nodoAc->getSiguiente();
            }
            delete nodoAc;
            break; // Se eliminó un nodo, salimos del bucle
        }
        anter = nodoAc;
        nodoAc = nodoAc->getSiguiente();
    }
}

template<class T>
void Lista<T>::incluirFinal(T nodoN) {
    Nodo<T>* nuevo = new Nodo<T>();
    nuevo->setDato(nodoN);
    if (!raiz) {
        raiz = nuevo;
    } else {
        Nodo<T>* nodoAc = raiz;
        while (nodoAc->getSiguiente()) {
            nodoAc = nodoAc->getSiguiente();
        }
        nodoAc->setSiguiente(nuevo);
    }

}
template <class T>
void Lista<T>::mostrar() {
    Nodo<T>* nodoActual = raiz;
    while (nodoActual) {
        cout << nodoActual->getDato() << " ";
        nodoActual = nodoActual->getSiguiente();
    }
    cout <<endl;
}