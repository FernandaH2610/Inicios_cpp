#include <iostream>
#include <cstdlib>

using namespace std;

void menuPrincipal();
void evaluarMenu1(int opcion1);
int obtenerNumeroMenu1();

int main() {
    int numero = obtenerNumeroMenu1();
    evaluarMenu1(numero);
    menuPrincipal();
    return 0;
}

/*OBTENCION DE DATOS
    Son modulos con valor, sirven para obtener un dato y devolverlos a modulos vacios*/

int obtenerNumeroMenu1(){
    int numero;
    cout << "Ingresa un numero: ";
    cin >> numero;

    return numero;
}

/*VALIDACION DE DATOS
    Son modulos con vacios, sirven para obtener contener informacion, sin regresar información
    se usan para diferentes cosas, impresion de textos*/

void evaluarMenu1(int opcion1){
    if (opcion1 >= 1 && opcion1 <= 3)
    {
        cout << "Opcion Valida, en seguida tienes tu respuesta" << endl;
        
    }        
    else
        {
            if (opcion1 == 4){

                cout << "Gracias por usar el programa." << endl;
        
            } 
            else{
                
                cout << "Opcion Invalida, por favor introduce una opcion valida :D";

            }
            
        }
    
}

void menuPrincipal(){
    int opcion;

    do
    {
        system("cls");
        cout <<"\n\n\t\t\t\t Menu Principal" << endl;
        cout <<"\t\t\t---------------------" << endl;
        cout <<"\n\t1. Menu De Calculo De Volumene De Un Cuerpo" << endl;
        cout <<"\n\t2. Menu De Calculo De Un Perimetro" << endl;
        cout <<"\n\t3. Menu De Calculo De cacular un perimetro" << endl;
        cout <<"\n\t4. Salir del programa" << endl;

        cout <<"\nIngrese Una Opcion del menu" << endl;
        cin >> opcion;
        evaluarMenu1(opcion);
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

    } while (opcion != 0);
    
}