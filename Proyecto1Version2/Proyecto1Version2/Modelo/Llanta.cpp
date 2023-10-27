//
// Created by estudiante on 23/10/2023.
//

#include "Llanta.h"

Llanta::~Llanta() {

}

void Llanta::mejoras() {
    //mejora traccion
    int trac=veh->getTraccion();
    trac+=getTraccion();
    veh->setTraccion(trac);
    //aumenta precio
    double pre=veh->getPrecio();
    pre+=getPrec();
    veh->setPrecio(pre);

}

Llanta::Llanta(const string &iden, const string &nombre, double prec, int traccion) : Decoracion(iden, nombre),
                                                                                      prec(prec), traccion(traccion) {}

double Llanta::getPrec() const {
    return prec;
}

void Llanta::setPrec(double prec) {
    Llanta::prec = prec;
}

int Llanta::getTraccion() const {
    return traccion;
}

void Llanta::setTraccion(int traccion) {
    Llanta::traccion = traccion;
}
