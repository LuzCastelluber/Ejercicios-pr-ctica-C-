// Ejercicio 5.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main() {
    int monedas;
    float multiplicador;
    float total;

    // Pedir al usuario la cantidad de monedas recogidas
    cout << "Ingrese la cantidad de monedas recogidas: ";
    cin >> monedas;

    // Pedir el multiplicador
    cout << "Ingrese el multiplicador: ";
    cin >> multiplicador;

    // Calcular el total de monedas con el multiplicador
    total = monedas * multiplicador;

    // Mostrar el resultado
    cout << "Total de monedas obtenidas con el multiplicador: " << total << endl;

    return 0;
}