// ejercicio 9.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>  // Para usar string

// Función principal
int main() {
    // Declaración de variables
    std::string nombre;
    int ataque;
    int defensa;
    float velocidadAtaque;
    int vidaMaxima;
    float multiplicadorCritico;

    // Solicitar los datos al usuario
    std::cout << "Ingrese el nombre del jugador: ";
    std::getline(std::cin, nombre);  // Permite ingresar espacios

    std::cout << "Ingrese el ataque: ";
    std::cin >> ataque;

    std::cout << "Ingrese la defensa: ";
    std::cin >> defensa;

    std::cout << "Ingrese la velocidad de ataque: ";
    std::cin >> velocidadAtaque;

    std::cout << "Ingrese la vida maxima: ";
    std::cin >> vidaMaxima;

    std::cout << "Ingrese el multiplicador de danio critico: ";
    std::cin >> multiplicadorCritico;

    // Mostrar los stats ingresados
    std::cout << "\n===== Stats del Jugador =====\n";
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Ataque: " << ataque << std::endl;
    std::cout << "Defensa: " << defensa << std::endl;
    std::cout << "Velocidad de ataque: " << velocidadAtaque << std::endl;
    std::cout << "Vida maxima: " << vidaMaxima << std::endl;
    std::cout << "Multiplicador de danio critico: " << multiplicadorCritico << std::endl;

    // Fin del programa
    return 0;
}