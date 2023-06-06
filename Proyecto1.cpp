#include <iostream>
#include <cstdlib>

using namespace std;

void menuPrincipal();
void evaluarMenu1(int opcion1);
int obtener1();

int main() {
    menuPrincipal();
    return 0;
}

int obtener1(){
    int opcion1;
    cout << "Ingrese la opcion que desea ejecutar: \n";
    cin >> opcion1;
    return opcion1;
}


void menuPrincipal(){

        system("cls");
        cout <<"\n\n\t\t\t\t Menu Principal" << endl;
        cout <<"\t\t\t---------------------" << endl;
        cout <<"\n\t1. Menu De Calculo De Volumene De Un Cuerpo" << endl;
        cout <<"\n\t2. Menu De Calculo De Un Perimetro" << endl;
        cout <<"\n\t3. Menu De Calculo De cacular un perimetro" << endl;
        cout <<"\n\t4. Salir del programa" << endl;
        int opcion = obtener1();
    do
    {
        switch (opcion) {
            case 1:
                cout <<"No puedo Marta" << endl;
                break;
            case 2:
                cout <<"No puedo Marta" << endl;
                break;
            case 3:
                cout <<"No puedo Marta" << endl;
                break;
            case 4:
                cout <<"No puedo Marta" << endl;
                break;
        }

    } while (opcion <= 1 && opcion >= 4);
    
}