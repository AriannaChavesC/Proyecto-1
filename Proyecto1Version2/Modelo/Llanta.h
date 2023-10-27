//
// Created by estudiante on 23/10/2023.
//

#ifndef PROYECTO1_LLANTA_H
#define PROYECTO1_LLANTA_H
#include <iostream>
#include <sstream>
#include "Vehiculo.h"
#include "Decoracion.h"

using namespace std;

class Llanta: public Decoracion{
private:
    Vehiculo *veh;
    double prec;
    int traccion;

public:
    Llanta(const string &iden, const string &nombre, double prec, int traccion);

    virtual ~Llanta();

    void mejoras() override;

    double getPrec() const;

    void setPrec(double prec);

    int getTraccion() const;

    void setTraccion(int traccion);
};


#endif //PROYECTO1_LLANTA_H
