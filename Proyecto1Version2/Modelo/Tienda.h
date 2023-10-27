//
// Created by estudiante on 23/10/2023.
//

#ifndef PROYECTO1_TIENDA_H
#define PROYECTO1_TIENDA_H
#include <iostream>
#include <sstream>
#include "Item.h"
#include "Lista.h"

using namespace std;

class Tienda: public Item{
private:
    bool estado;
    Lista<Item>items;
public:
    Tienda(const string &id, const string &nom, double pre, int trac, int vel, int pot, bool estado);

    ~Tienda() override;

    bool isEstado() const;

    void setEstado(bool estado);

    //void agregarArticulo(Item articulo);

};


#endif //PROYECTO1_TIENDA_H
