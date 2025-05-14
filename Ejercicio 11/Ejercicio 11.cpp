// Ejercicio 11.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <iostream>
#include <string>

using namespace std;

// Función para calcular el daño recibido
int CalcularDanio(int ataque, int defensa) {
    return ataque - defensa;
}

int main() {
    // Datos del jugador
    string nombreJugador;
    int vidaJugador, ataqueJugador, defensaJugador;

    // Datos del enemigo
    string nombreEnemigo;
    int vidaEnemigo, ataqueEnemigo, defensaEnemigo;

    // Solicitar datos del jugador
    cout << "Ingrese el nombre del jugador: ";
    getline(cin, nombreJugador);
    cout << "Ingrese vida del jugador: ";
    cin >> vidaJugador;
    cout << "Ingrese ataque del jugador: ";
    cin >> ataqueJugador;
    cout << "Ingrese defensa del jugador: ";
    cin >> defensaJugador;
    cin.ignore(); // limpiar buffer

    // Solicitar datos del enemigo
    cout << "Ingrese el nombre del enemigo: ";
    getline(cin, nombreEnemigo);
    cout << "Ingrese vida del enemigo: ";
    cin >> vidaEnemigo;
    cout << "Ingrese ataque del enemigo: ";
    cin >> ataqueEnemigo;
    cout << "Ingrese defensa del enemigo: ";
    cin >> defensaEnemigo;

    // Mostrar vidas iniciales
    cout << "\n--- Vida Inicial ---\n";
    cout << nombreJugador << ": " << vidaJugador << " HP" << endl;
    cout << nombreEnemigo << ": " << vidaEnemigo << " HP" << endl;

    // Calcular daños
    int danioAlEnemigo = CalcularDanio(ataqueJugador, defensaEnemigo);
    int danioAlJugador = CalcularDanio(ataqueEnemigo, defensaJugador);

    // Restar daños a las vidas
    vidaEnemigo -= danioAlEnemigo;
    vidaJugador -= danioAlJugador;

    // Mostrar resultados
    cout << "\n--- Resultados del Combate ---\n";
    cout << nombreJugador << " hizo " << danioAlEnemigo << " de daño a " << nombreEnemigo << endl;
    cout << nombreEnemigo << " hizo " << danioAlJugador << " de daño a " << nombreJugador << endl;

    cout << "\n--- Vida Final ---\n";
    cout << nombreJugador << ": " << vidaJugador << " HP" << endl;
    cout << nombreEnemigo << ": " << vidaEnemigo << " HP" << endl;

    // Fin del programa
    return 0;
}