// ejercicio 7.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

#include <iostream>
using namespace std;

// Declaración de la función Sumar
int Sumar(int a, int b) {
    return a + b;
}

int main() {
    int puntosIniciales;
    int puntosGanados;
    int total;

    // Pedir puntos iniciales y ganados al jugador
    cout << "Ingrese los puntos iniciales del jugador: ";
    cin >> puntosIniciales;

    cout << "Ingrese los puntos ganados: ";
    cin >> puntosGanados;

    // Usar la función Sumar para calcular el total
    total = Sumar(puntosIniciales, puntosGanados);

    // Mostrar el total
    cout << "Puntos totales: " << total << endl;

    return 0;
}