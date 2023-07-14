//Hacer un programa que muestre 3 n�meros ordenados desendentemente, utilizar un procedimiento para cada operaci�n//

#include <iostream>
using namespace std;


void intercambiar(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// ordena los numeros ingresados de manera descendente//
void ordenarDescendente(int& a, int& b, int& c) {
    if (a < b)
        intercambiar(a, b);
    if (a < c)
        intercambiar(a, c);
    if (b < c)
        intercambiar(b, c);
}

int main() {
    int num1;
	int num2; 
	int num3;


    cout << "Ingrese el primer n�mero: ";
    cin >> num1;
    cout << "Ingrese el segundo n�mero: ";
    cin >> num2;
    cout << "Ingrese el tercer n�mero: ";
    cin >> num3;

    // Llamar al procedimiento para ordenar los n�meros
    ordenarDescendente(num1, num2, num3);

    // Mostrar los n�meros ordenados
    cout << "Los n�meros ordenados de manera descendente son: " << num1 << ", " << num2 << ", " << num3 << endl;

    return 0;
}

