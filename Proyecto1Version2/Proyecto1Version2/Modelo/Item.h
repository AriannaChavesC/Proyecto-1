//
// Created by estudiante on 23/10/2023.
//

#ifndef PROYECTO1_ITEM_H
#define PROYECTO1_ITEM_H
#include <iostream>
#include <sstream>
#include "Lista.h"
using namespace std;

class Item {
private:
    string iden;
    string nombre;
    double precio;
    int traccion;
    int velocidad;
    int potencia;
    Lista<Item> items;

public:
    Item(const string &id, const string &nom, double pre, int trac, int vel, int pot);

    virtual ~Item();

    const string &getIden() const;

    void setIden(const string &iden);

    const string &getNombre() const;

    void setNombre(const string &nombre);

    double getPrecio() const;

    void setPrecio(double precio);

    int getTraccion() const;

    void setTraccion(int traccion);

    int getVelocidad() const;

    void setVelocidad(int velocidad);

    int getPotencia() const;

    void setPotencia(int potencia);
    string toString() const;
    void agregarIteam(Item lis);
};


#endif //PROYECTO1_ITEM_H
