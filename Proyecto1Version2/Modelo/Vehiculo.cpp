//
// Created by estudiante on 23/10/2023.
//

#include "Vehiculo.h"

Vehiculo::Vehiculo(const string &id, const string &nom, double pre,int trac, int vel, int pot) : Item(id,nom,pre,traccion,velocidad,potencia) {}
/*
void Vehiculo::agregarDecoracion(Decoracion &dec) {
    decoraciones.incluirPrincipio(dec);
}

void Vehiculo::quitarDecoracion(Decoracion &deco) {
    decoraciones.borrar(deco);
}*/

string Vehiculo::mostrar() {
    stringstream s;
    s << "Vehículo: " << getNombre() << endl;
    s << "Precio: " << getPrecio() << endl;
    s << "Tracción: " << traccion << endl;
    s << "Velocidad: " << velocidad << endl;
    s << "Potencia: " << potencia << endl;
    s << "Decoraciones: " << endl;
    return s.str();
}

int Vehiculo::getTraccion() const {
    return traccion;
}

void Vehiculo::setTraccion(int trac) {
    traccion = trac;
}

int Vehiculo::getVelocidad() const {
    return velocidad;
}

void Vehiculo::setVelocidad(int veloc) {
    velocidad = veloc;
}

int Vehiculo::getPotencia() const {
    return potencia;
}

void Vehiculo::setPotencia(int pot) {
    potencia = pot;
}

