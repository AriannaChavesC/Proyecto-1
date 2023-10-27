//
// Created by estudiante on 23/10/2023.
//

#ifndef PROYECTO1_JUGADOR_H
#define PROYECTO1_JUGADOR_H
#include <iostream>
#include <sstream>
#include "Vehiculo.h"
#include "Lista.h"
#include "Item.h"

using namespace std;

class Jugador {
private:
    string iden;
    string nombre;
    double dinero;
    Vehiculo* veh;
    Item *items;
    Lista<Vehiculo> vehi;
public:
    Jugador(const string &ide, const string &nom, double din);

    virtual ~Jugador();

    const string &getIden() const;

    void setIden(const string &iden);

    const string &getNombre() const;

    void setNombre(const string &nombre);

    double getDinero() const;

    void setDinero(double dinero);

    void agregarVehiculo(Vehiculo vehi);
    void comprarItem(const Item& item);
    void agregarVehiculo(const Item& vehiculo);


    string toString();
};


#endif //PROYECTO1_JUGADOR_H
