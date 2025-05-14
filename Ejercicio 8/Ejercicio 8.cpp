// Ejercicio 8.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

// Declaración de la función CalcularDanio
int CalcularDanio(int ataque, int defensa) {
    // Calcula el daño como ataque menos defensa
    return ataque - defensa;
}

// Función principal
int main() {
    // Declaración de variables
    int ataque;
    int defensa;
    int danio;

    // Solicitar valores al usuario
    std::cout << "Ingrese el valor de ataque: ";
    std::cin >> ataque;

    std::cout << "Ingrese el valor de defensa: ";
    std::cin >> defensa;

    // Llamada a la función CalcularDanio
    danio = CalcularDanio(ataque, defensa);

    // Mostrar el resultado
    std::cout << "El daño calculado es: " << danio << std::endl;

    // Fin del programa
    return 0;
}