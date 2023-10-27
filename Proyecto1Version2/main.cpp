#include <iostream>
#include "Modelo/Motor.h"
#include "Modelo/Llanta.h"
#include "Modelo/Nitro.h"
#include "Modelo/Jugador.h"

int main() {
    // Crear la tienda con los artefactos
    Motor motor1("1", "Motor intermedio", 1700, 25);
    Motor motor2("2", "Motor alto rendimiento", 2300, 50);
    Llanta llantas1("3", "Llanta AA alta tracción", 2200, 80);
    Llanta llantas2("4", "Llanta B tracción normal", 1100, 45);
    Llanta llantas3("5", "Llanta C tracción baja", 600, -10);
    Nitro nitro1("6", "Nitro básico", 1000, 10);
    Nitro nitro2("7", "Nitro intermedio", 1500, 20);
    Nitro nitro3("8", "Nitro alto rendimiento", 2000, 30);

    // Crear al jugador con 5000 monedas
    Jugador jugador("1", "Jugador", 5000);

    // Crear los vehículos
    Vehiculo vehiculo1("1", "Ferrari 458 Italia Coupe", 15000, 21, 250, 562);
    Vehiculo vehiculo2("2", "Tesla Model X", 17000, 22, 180, 670);
    Vehiculo vehiculo3("3", "Maserati MC12 Stradale", 17000, 18, 255, 450);

    // Comprar vehículos
    jugador.comprarItem(vehiculo1);
    jugador.comprarItem(vehiculo2);
    jugador.comprarItem(vehiculo3);

    // Agregar decoraciones a los vehículos
    vehiculo1.agregarDecoracion(llantas1);
    vehiculo1.agregarDecoracion(motor2);

    vehiculo2.AgregarDecoracion(&nitro3);
    vehiculo2.AgregarDecoracion(&llantas3);

    vehiculo3.AgregarDecoracion(&motor1);
    vehiculo3.AgregarDecoracion(&nitro1);

    // Mostrar vehículos con decoraciones
    for (int i = 0; i < jugador.numVehiculos; ++i) {
        Vehiculo* vehiculo = jugador.vehiculos[i];
        std::cout << "Vehículo " << vehiculo->nombre << " con decoraciones:\n";
        vehiculo->MostrarDecoraciones();
    }

    // Quitar todas las decoraciones
    for (int i = 0; i < jugador.numVehiculos; ++i) {
        Vehiculo* vehiculo = jugador.vehiculos[i];
        while (vehiculo->numDecoraciones > 0) {
            vehiculo->QuitarDecoracion(vehiculo->decoraciones[0]);
        }
    }

    // Mostrar vehículos sin decoraciones
    jugador.MostrarVehiculosSinDecoraciones();

    return 0;
}