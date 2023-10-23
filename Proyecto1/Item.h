//
// Created by estudiante on 23/10/2023.
//

#ifndef PROYECTO1_ITEM_H
#define PROYECTO1_ITEM_H
#include <iostream>
#include <sstream>

using namespace std;

class Item {
private:
    string iden;
    string nombre;
    double precio;
    string traccion;
    int velocidad;
    float potencia;

public:
    Item(const string &id, const string &nom, double pre, const string &trac, int vel, float pot);

    virtual ~Item();

    const string &getIden() const;

    void setIden(const string &iden);

    const string &getNombre() const;

    void setNombre(const string &nombre);

    double getPrecio() const;

    void setPrecio(double precio);

    const string &getTraccion() const;

    void setTraccion(const string &traccion);

    int getVelocidad() const;

    void setVelocidad(int velocidad);

    float getPotencia() const;

    void setPotencia(float potencia);
    string toString() const;
};


#endif //PROYECTO1_ITEM_H
