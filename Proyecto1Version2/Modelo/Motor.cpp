//
// Created by estudiante on 23/10/2023.
//

#include "Motor.h"



Motor::~Motor() {

}

Motor::Motor(const string &iden, const string &nombre, double pre, int potencia) : Decoracion(iden, nombre), pre(pre),
                                                                                   potencia(potencia) {}

void Motor::mejoras() {
    //mejoras de potencia
    int pot=veh->getPotencia();
    pot+=getPotencia();
    veh->setPotencia(pot);

    //Aumento de precio
    double prec=veh->getPrecio();
    prec+=getPre();
    veh->setPrecio(prec);
}

int Motor::getPotencia() const {
    return potencia;
}

void Motor::setPotencia(int potencia) {
    Motor::potencia = potencia;
}

double Motor::getPre() const {
    return pre;
}

void Motor::setPre(double pre) {
    Motor::pre = pre;
}


