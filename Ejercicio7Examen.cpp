//Crear un programa en C++, que pueda seguir agregando contactos de email, hacia el//
//archivo que creamos en el ejercicio 7//
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string nombre, email;
    ofstream archivo("contactos.txt", ios::app);

    cout << "Ingrese el nombre: ";
    getline(cin, nombre);

    cout << "Ingrese el email: ";
    getline(cin, email);

    archivo << nombre << ", " << email << endl;

    archivo.close();

    return 0;
}
