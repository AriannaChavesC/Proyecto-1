//
// Created by estudiante on 23/10/2023.
//

#ifndef PROYECTO1_VEHICULO_H
#define PROYECTO1_VEHICULO_H
#include <iostream>
#include <sstream>
#include "Item.h"

using namespace std;


class Vehiculo: public Item{
public:
    Vehiculo(const string &id, const string &nom, double pre, const string &trac, int vel, float pot);
};


#endif //PROYECTO1_VEHICULO_H
