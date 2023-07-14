// Hace un programa que muestre 3 n�meros ordenados de ascendentemente, utilizar un procedimiento para cada operaci�n//

#include <iostream>
using namespace std;


void intercambiar(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}


void ordenarAscendente(int& a, int& b, int& c) {
    if (a > b)
        intercambiar(a, b);
    if (a > c)
        intercambiar(a, c);
    if (b > c)
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

    ordenarAscendente(num1, num2, num3);

   
    cout << "Los n�meros ordenados de manera ascendente son: " << num1 << ", " << num2 << ", " << num3 << endl;

    return 0;
}

