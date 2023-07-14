//Utilizar la función fopen(), para determinar si existe un archivo de texto (.txt)//
//o no.//
//fopen(nombre de archivo , modo); nombre de archivo = cadena ... contiene el identificar externo del archivo//
//modo = cadena ... contiene el modo en que va a ser tratado el archivo//
#include <stdio.h>

int main()
{
    FILE *archivo;
    char nombreArchivo[] = "archivo.txt";

    archivo = fopen(nombreArchivo, "r");

    if (archivo == NULL)
    {
        printf("El archivo no existe.\n");
    }
    else
    {
        printf("El archivo existe.\n");
        fclose(archivo);
    }

    return 0;
}

