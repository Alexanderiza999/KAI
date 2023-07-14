//Hacer un programa que muestre 3 números ordenados desendentemente, utilizar un procedimiento para cada operación//

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


    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;
    cout << "Ingrese el tercer número: ";
    cin >> num3;

    // Llamar al procedimiento para ordenar los números
    ordenarDescendente(num1, num2, num3);

    // Mostrar los números ordenados
    cout << "Los números ordenados de manera descendente son: " << num1 << ", " << num2 << ", " << num3 << endl;

    return 0;
}

