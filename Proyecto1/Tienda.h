//
// Created by estudiante on 23/10/2023.
//

#ifndef PROYECTO1_TIENDA_H
#define PROYECTO1_TIENDA_H
#include <iostream>
#include <sstream>
#include "Item.h"

using namespace std;

class Tienda: public Item{
private:
    bool estado;
public:
    Tienda(const string &id, const string &nom, double pre, const string &trac, int vel, float pot, bool estado);

    ~Tienda() override;

    bool isEstado() const;

    void setEstado(bool estado);


};


#endif //PROYECTO1_TIENDA_H
