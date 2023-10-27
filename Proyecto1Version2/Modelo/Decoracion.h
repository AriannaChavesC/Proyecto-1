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
    string iden;
    string nombre;
    double precio;
    int traccion;
    int velocidad;
    int potencia;
public:
    Decoracion(const string &iden, const string &nombre,double precio=0.0, int tracc=0, int pot=0, int velo=0);

    virtual void mejoras()=0;
};


#endif //PROYECTO1_DECORACION_H
