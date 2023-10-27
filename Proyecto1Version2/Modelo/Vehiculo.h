//
// Created by estudiante on 23/10/2023.
//

#ifndef PROYECTO1_VEHICULO_H
#define PROYECTO1_VEHICULO_H
#include <iostream>
#include <sstream>
#include "Item.h"
#include "Lista.h"
#include "Decoracion.h"

using namespace std;

class Vehiculo: public Item{
private:
    int traccion;
    int velocidad;
    int potencia;
    //Lista<Decoracion> decoraciones;
public:
    Vehiculo(const string &id, const string &nom, double pre, int trac, int vel, int pot);

    int getTraccion() const;

    void setTraccion(int traccion);

    int getVelocidad() const;

    void setVelocidad(int velocidad);

    int getPotencia() const;

    void setPotencia(int potencia);
/*
    void agregarDecoracion(Decoracion &dec);
    void quitarDecoracion(Decoracion &deco);*/
    string mostrar();
};


#endif //PROYECTO1_VEHICULO_H
