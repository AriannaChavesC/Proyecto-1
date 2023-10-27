//
// Created by estudiante on 23/10/2023.
//

#ifndef PROYECTO1_MOTOR_H
#define PROYECTO1_MOTOR_H
#include <iostream>
#include <sstream>
#include "Vehiculo.h"
#include "Decoracion.h"

using namespace std;

class Motor: public Decoracion{
private:
    double pre;
    int potencia;

    Vehiculo *veh;
public:
    Motor(const string &iden, const string &nombre, double pre, int potencia);

    virtual ~Motor();

    void mejoras() override;

    int getPotencia() const;

    void setPotencia(int potencia);

    double getPre() const;

    void setPre(double pre);


};


#endif //PROYECTO1_MOTOR_H
