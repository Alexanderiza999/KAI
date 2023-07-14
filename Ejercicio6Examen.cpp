// Crear un archivo de texto (.txt), donde guardar los emails de amigos.//
//fprintf(puntero, informacion);//
//fwrite(dato a guardar, tamaño, longitud, puntero)//
#include <iostream>
#include <fstream>
using namespace std;

int main() {

  ofstream archivo("amigos.txt");

  // Escribir en el archivo
  archivo << "amigo1@example.com" << endl;
  archivo << "amigo2@example.com" << endl;
  archivo << "amigo3@example.com" << endl;

 
  archivo.close();
}
