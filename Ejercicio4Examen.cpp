//Hacer un programa que pida por pantalla una temperatura en grados Celsius,//
//muestre un menú para convertirlos a Fahrenheit o Kelvin y muestre el equivalente por//
//pantalla, utilizar funciones//
#include <iostream>
using namespace std;

float celsiusToFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

float celsiusToKelvin(float celsius) {
    return celsius + 273.15;
}

int main() {
    float celsius;
    int opcion;

    cout << "Ingrese la temperatura en grados Celsius: ";
    cin >> celsius;

    cout << "Seleccione conversion " << endl;
    cout << "1. Convertir a Fahrenheit" << endl;
    cout << "2. Convertir a Kelvin" << endl;
    cin >> opcion;

    switch(opcion) {
        case 1:
            cout << "La temperatura en grados Fahrenheit es: " << celsiusToFahrenheit(celsius) << endl;
            break;
        case 2:
            cout << "La temperatura en grados Kelvin es: " << celsiusToKelvin(celsius) << endl;
            break;
        default:
            cout << "Opción inválida" << endl;
            break;
    }

    return 0;
}
