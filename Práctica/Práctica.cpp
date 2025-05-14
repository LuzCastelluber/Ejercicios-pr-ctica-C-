#include <iostream>  // Necesario para entrada/salida
using namespace std; // Nos permite usar cout y cin sin escribir std::

int main() {
    // Declaramos las variables
    int vidaActual;
    int danio;

    // Pedimos la vida actual
    cout << "Ingrese la vida actual del personaje: ";
    cin >> vidaActual;

    // Pedimos el daño recibido
    cout << "Ingrese el daño recibido: ";
    cin >> danio;

    // Calculamos la vida restante
    int vidaRestante = vidaActual - danio;

    // Mostramos el resultado
    cout << "La vida restante del personaje es: " << vidaRestante << endl;

    return 0; // Fin del programa
}