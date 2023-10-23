//
// Created by estudiante on 23/10/2023.
//

#include "Jugador.h"

Jugador::Jugador(const string &ide, const string &nom, double din) : iden(ide), nombre(nom),
                                                                            dinero(din) {}

Jugador::~Jugador() {

}

const string &Jugador::getIden() const {
    return iden;
}

void Jugador::setIden(const string &ide) {
    iden = ide;
}

const string &Jugador::getNombre() const {
    return nombre;
}

void Jugador::setNombre(const string &nom) {
    nombre = nom;
}

double Jugador::getDinero() const {
    return dinero;
}

void Jugador::setDinero(double din) {
    dinero = din;
}

string Jugador::toString() {
    stringstream s;
    s<<"Identificacion: "<<getIden()<<endl;
    s<<"Nombre: "<<getNombre()<<endl;
    s<<"Dinero disponible: "<<getDinero()<<endl;
    s<<"Vehiculos disponibles: "; /*lista*/
    return s.str();
}
