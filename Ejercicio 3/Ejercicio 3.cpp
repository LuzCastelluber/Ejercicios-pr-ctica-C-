// Ejercicio 3.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main() {
    int vidaActual;
    int curacion;

    cout << "Ingrese la vida actual del personaje: ";
    cin >> vidaActual;

    cout << "Ingrese la cantidad de curación: ";
    cin >> curacion;

    int nuevaVida = vidaActual + curacion;

    cout << "La nueva vida del personaje es: " << nuevaVida << endl;

    return 0;
}