// Ej 8 de otra forma siguiendo la clase.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int CalcularDanio(int ataque, int defensa) {
    return ataque - defensa;
}

int main() {
    int ataque, defensa;
    cout << "Ingrese ataque: ";
    cin >> ataque;
    cout << "Ingrese defensa: ";
    cin >> defensa;
    cout << "Daño: " << CalcularDanio(ataque, defensa);
    return 0;
}