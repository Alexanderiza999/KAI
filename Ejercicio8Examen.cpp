//Hacer una estructura llamada alumno, en la cual se tendrán los siguientes//
//Campos: Nombre, edad, promedio, pedir datos al usuario para 3 alumnos, comprobar cuál//
//de los 3 tiene el mejor promedio y posteriormente imprimir los datos del alumno//
#include <iostream>
#include <string>

using namespace std;

struct Alumno {
    string nombre;
    int edad;
    float promedio;
};

int main() {
    Alumno alumnos[3];
    float mejor_promedio = 0;
    int mejor_alumno = 0;

    for (int i = 0; i < 3; i++) {
        cout << "Ingrese el nombre del alumno " << i + 1 << ": ";
        getline(cin, alumnos[i].nombre);

        cout << "Ingrese la edad del alumno " << i + 1 << ": ";
        cin >> alumnos[i].edad;

        cout << "Ingrese el promedio del alumno " << i + 1 << ": ";
        cin >> alumnos[i].promedio;

        if (alumnos[i].promedio > mejor_promedio) {
            mejor_promedio = alumnos[i].promedio;
            mejor_alumno = i;
        }

        cin.ignore();
    }

    cout << endl;
    cout << "El alumno con el mejor promedio es: " << endl;
    cout << "Nombre: " << alumnos[mejor_alumno].nombre << endl;
    cout << "Edad: " << alumnos[mejor_alumno].edad << endl;
    cout << "Promedio: " << alumnos[mejor_alumno].promedio << endl;

    return 0;
}
