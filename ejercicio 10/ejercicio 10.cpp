// ejercicio 10.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <iostream>

using namespace std;

// Función que convierte minutos a formato hs:mm y los muestra
void MostrarTiempo(int minutos) {
    int horas = minutos / 60;
    int min = minutos % 60;
    cout << horas << " hs " << min << " min";
}

int main() {
    // Declaración de variables
    int dia1, dia2, dia3;
    int totalMinutos;
    int promedioMinutos;

    // Solicitar al usuario los minutos jugados en 3 días
    cout << "Ingrese minutos jugados el Dia 1: ";
    cin >> dia1;

    cout << "Ingrese minutos jugados el Dia 2: ";
    cin >> dia2;

    cout << "Ingrese minutos jugados el Dia 3: ";
    cin >> dia3;

    // Calcular total y promedio
    totalMinutos = dia1 + dia2 + dia3;
    promedioMinutos = totalMinutos / 3;

    // Mostrar resultados
    cout << "\n==== Tiempo Total de Juego ====\n";
    cout << "Total jugado: ";
    MostrarTiempo(totalMinutos);
    cout << endl;

    cout << "Promedio diario: ";
    MostrarTiempo(promedioMinutos);
    cout << endl;

    // Fin del programa
    return 0;
}