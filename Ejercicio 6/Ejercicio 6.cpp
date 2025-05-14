// Ejercicio 6.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <iostream>
using namespace std;

int main() {
    int monedas;
    int precio;
    int monedasRestantes;

    // Pedir cantidad de monedas que tiene el jugador
    cout << "Ingrese la cantidad de monedas que tiene el jugador: ";
    cin >> monedas;

    // Pedir el precio del objeto
    cout << "Ingrese el precio del objeto: ";
    cin >> precio;

    // Calcular las monedas restantes después de la compra
    monedasRestantes = monedas - precio;

    // Mostrar el resultado
    cout << "Monedas restantes después de la compra: " << monedasRestantes << endl;

    return 0;
}