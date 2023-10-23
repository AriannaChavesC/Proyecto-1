cmake_minimum_required(VERSION 3.26)
project(Proyecto1)

set(CMAKE_CXX_STANDARD 17)

add_executable(Proyecto1 main.cpp
        Item.cpp
        Item.h
        Jugador.cpp
        Jugador.h
        Tienda.cpp
        Tienda.h
        Motor.cpp
        Motor.h
        Decoracion.cpp
        Decoracion.h
        Llanta.cpp
        Llanta.h
        Nitro.cpp
        Nitro.h
        Vehiculo.cpp
        Vehiculo.h
        Nodo.cpp)
