//
// Created by estudiante on 23/10/2023.
//

#include "Tienda.h"

Tienda::Tienda(const string &id, const string &nom, double pre,int trac, int vel, int pot, bool estado)
        : Item(id, nom, pre, trac, vel, pot), estado(estado) {}

Tienda::~Tienda() {

}

bool Tienda::isEstado() const {
    return estado;
}

void Tienda::setEstado(bool est) {
    estado = est;
}

void Tienda::agregarArticulo(Item articulo) {
    items.incluirPrincipio(articulo);
}
