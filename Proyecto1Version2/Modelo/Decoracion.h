//
// Created by estudiante on 23/10/2023.
//

#ifndef PROYECTO1_DECORACION_H
#define PROYECTO1_DECORACION_H
#include <iostream>
#include <sstream>
#include "Vehiculo.h"

using namespace std;

class Decoracion{
private:
    Vehiculo *vehi;
    string iden;
    string nombre;
    double precio;
    int traccion;
    int velocidad;
    int potencia;
public:
    Decoracion(const string &iden, const string &nombre,0, 0, 0, 0);

    virtual void mejoras()=0;
};


#endif //PROYECTO1_DECORACION_H
