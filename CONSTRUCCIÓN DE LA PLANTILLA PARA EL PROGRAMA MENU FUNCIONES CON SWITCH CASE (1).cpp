//CONSTRUCCIÓN DE LA PLANTILLA PARA EL PROGRAMA MENU FUNCIONES CON//
//SWITCH CASE//
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int opcion;
    bool repetir = true;
    
    do {
        system("cls");
        
        cout << "\n\nMenu de Opciones" << endl;
        cout << "1. Opcion 1" << endl;
        cout << "2. Opcion 2" << endl;
        cout << "3. Opcion 3" << endl;
        cout << "4. Opcion 4" << endl;
        cout << "0. SALIR" << endl;
        
        cout << "\nIngrese una opcion: ";
        cin >> opcion;
        
        switch (opcion) {
            case 1:
                
                system("pause>nul"); // Pausa
                break;
                
            case 2:
                
                system("pause>nul"); // Pausa
                break;
                
            case 3:
                
                system("pause>nul"); // Pausa            
                break;
                
            case 4:           
                
                system("pause>nul"); // Pausa                
                break;
            
            case 0:
            	repetir = false;
            	break;
        }        
    } while (repetir);
	 
    return 0;
}
