//
// Created by estudiante on 23/10/2023.
//

#include "Item.h"

Item::Item(const string &id, const string &nom, double pre, const string &trac, int vel, float pot)
        : iden(id), nombre(nom), precio(pre), traccion(trac), velocidad(vel), potencia(pot) {}

const string &Item::getIden() const {
    return iden;
}

void Item::setIden(const string &ide) {
   iden = ide;
}

const string &Item::getNombre() const {
    return nombre;
}

void Item::setNombre(const string &nom) {
    nombre = nom;
}

double Item::getPrecio() const {
    return precio;
}

void Item::setPrecio(double pre) {
    precio = pre;
}

const string &Item::getTraccion() const {
    return traccion;
}

void Item::setTraccion(const string &tra) {
    traccion = tra;
}

int Item::getVelocidad() const {
    return velocidad;
}

void Item::setVelocidad(int vel) {
    velocidad = vel;
}

float Item::getPotencia() const {
    return potencia;
}

void Item::setPotencia(float pot) {
    potencia = pot;
}

string Item::toString() const {
    stringstream s;
    s<<"Identificacion: "<<getIden()<<endl;
    s<<"Nombre: "<<getNombre()<<endl;
    s<<"Precio: "<<getPrecio()<<endl;
    s<<"Traccion: "<<getTraccion()<<endl;
    s<<"Velocidad: "<<getVelocidad()<<endl;
    s<<"Potencia: "<<getPotencia()<<endl;
    return s.str();
}

Item::~Item() {

}
