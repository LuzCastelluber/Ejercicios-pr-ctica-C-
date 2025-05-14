#include <iostream>
using namespace std;

int main() {
    int puntosIniciales, puntosGanados;

    cout << "Ingrese los puntos iniciales: ";
    cin >> puntosIniciales;

    cout << "Ingrese los puntos ganados: ";
    cin >> puntosGanados;

    int total = puntosIniciales + puntosGanados;
    cout << "Total de puntos: " << total << endl;

    return 0;
}