//
// Created by estudiante on 23/10/2023.
//

#ifndef PROYECTO1_NITRO_H
#define PROYECTO1_NITRO_H
#include <iostream>
#include <sstream>
#include "Vehiculo.h"
#include "Decoracion.h"

using namespace std;

class Nitro: public Decoracion{
private:
    Vehiculo *veh;
    double prec;
    int velocidad;
public:
    Nitro(const string &iden, const string &nombre, double prec, int velocidad);

    virtual ~Nitro();

    void mejoras() override;

    double getPrec() const;

    void setPrec(double prec);

    int getVelocidad() const;

    void setVelocidad(int velocidad);
};


#endif //PROYECTO1_NITRO_H
