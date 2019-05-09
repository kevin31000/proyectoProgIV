#include <iostream>
#include <cstdlib>

#include "Menu.h"
 
using namespace std;
 

 
void menu::menuSeleccion()
{
    bool bandera=false;
    char tecla;
 
    do
    {
        system("cls");
        cin.clear();
        cout << "------------------------------" << endl;
        cout << "	DEUSTOCLOTHES" << endl;
        cout << "------------------------------" << endl << endl;

        cout << " Bienvenido al sistema" << endl;
        cout << "------------------------------" << endl << endl;
        cout << " ¿Que quieres hacer?" << endl << endl;
        cout << " 1.-Consultar stock" << endl;
        cout << "	2.-Añadir articulo nuevo" << endl;
        cout << "	3.-Borrar artículo" << endl;
        cout << "	4.-Actualizar stock" << endl;
        cout << "	5.-Consultar estadisticas" << endl;
        cout << " 6.-Hacer un pedido" << endl;
        cout << " 7.-Cerrar sesion" << endl << endl;

 
        cin >> tecla;
 
		switch(tecla)
		{
			case '1':
				system("cls");
				cout << "Has elejido Sumar.\n";
				pausa();
				break;
 
			case '2':
				system("cls");
				cout << "Has elejido Restar.\n";
				pausa();
				break;
 
			case '3':
				system("cls");
				cout << "Has elejido Multiplicar.\n";
				pausa();
				break;
 
			case '4':
				system("cls");
				cout << "Has elejido Dividir.\n";
				pausa();
				break;
 
			case '5':
				bandera=true;
				//exit(1);
				break;
 
			default:
				system("cls");
				cout << "Opcion no valida.\a\n";
				pausa();
				break;
		}
    }while(bandera!=true);
 

}

void menu::pausa()
{
    cout << "Pulsa una tecla para continuar...";
    getwchar();
    getwchar();
}
