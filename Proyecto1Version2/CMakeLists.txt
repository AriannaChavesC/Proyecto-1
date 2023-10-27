cmake_minimum_required(VERSION 3.26)
project(Proyecto1)

set(CMAKE_CXX_STANDARD 17)

add_executable(Proyecto1 main.cpp
        Modelo/Item.cpp
        Modelo/Item.h
        Modelo/Jugador.cpp
        Modelo/Jugador.h
        Modelo/Tienda.cpp
        Modelo/Tienda.h
        Modelo/Motor.cpp
        Modelo/Motor.h
        Modelo/Decoracion.cpp
        Modelo/Decoracion.h
        Modelo/Llanta.cpp
        Modelo/Llanta.h
        Modelo/Nitro.cpp
        Modelo/Nitro.h
        Modelo/Vehiculo.cpp
        Modelo/Vehiculo.h
        Modelo/Nodo.cpp
        Modelo/Nodo.h
        Modelo/Lista.cpp
        Modelo/Lista.h)
