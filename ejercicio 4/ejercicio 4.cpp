// ejercicio 4.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <iostream>
using namespace std;

int main() {
    int nivel;
    int experienciaNecesaria;

    // Pedir al usuario el nivel actual
    cout << "Ingrese el nivel actual del personaje: ";
    cin >> nivel;

    // Calcular la experiencia necesaria para el próximo nivel
    experienciaNecesaria = nivel * 100;

    // Mostrar el resultado
    cout << "Experiencia necesaria para subir al siguiente nivel: " << experienciaNecesaria << endl;

    return 0;
}