//
// Created by estudiante on 23/10/2023.
//

#include "Nitro.h"


Nitro::~Nitro() {

}

double Nitro::getPrec() const {
    return prec;
}

void Nitro::setPrec(double prec) {
    Nitro::prec = prec;
}

int Nitro::getVelocidad() const {
    return velocidad;
}

void Nitro::setVelocidad(int velocidad) {
    Nitro::velocidad = velocidad;
}

void Nitro::mejoras() {
//mejora de velocidad
    int veloc=veh->getVelocidad();
    veloc += getVelocidad();
    veh->setVelocidad(veloc);
    //Aumento precio
    int pre = veh->getPrecio();
    pre += getPrec();
    veh->setPrecio(pre);
}

Nitro::Nitro(const string &iden, const string &nombre, double prec, int velocidad) : Decoracion(iden, nombre),
                                                                                     prec(prec), velocidad(velocidad) {}
