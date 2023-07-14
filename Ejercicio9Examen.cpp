//Pedir al usuario que digite una palabra. luego mostrar la palabra invertida y//
//comprobar si es capicúa//
#include <iostream>
#include <algorithm>
#include <string>

int main() {
    std::string palabra;
    std::cout << "Introduce una palabra\n";
    std::cin >> palabra;
    std::string invertida(palabra.rbegin(),palabra.rend());
    std::cout << "Palabra invertida: " << invertida << '\n';
}
