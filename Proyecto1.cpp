#include <iostream>
#include <cstdlib>

using namespace std;

void menuPrincipal();

//Menus secundarios
void menuVolumen();
void menuPerimetro();
void menuArea();

//Extas
void adios();
void vacio();

//Modulo para obtener la variable del menu 1
int obtener1();

//Modulo para obtener la variable del menu 2
int obtener2();


int main() {
    menuPrincipal();
    return 0;
}

/*MODULO DE OBTENCION
    Este modulo, lo que hace es que toma la variable opcion1
    la envia al modulo "menuPrincipal y es el accionador del 
    switch y el do - while, es un modulo con retorno, lo que 
    quiere decir es que  toma un dato y los retorna, por eso 
    es una funcion con valor diferente a void."*/

int obtener1(){
    int opcion1;
    cout << "Ingrese la opcion que desea ejecutar: \n";
    cin >> opcion1;
    return opcion1;
}

int obtener2(){
    int opcion2;
    cout << "Ingrese la opcion que desea ejecutar: \n";
    cin >> opcion2;
    return opcion2;
}


void menuPrincipal(){

        system("cls");
        cout <<"\n\n\t\t\t\t Menu Principal" << endl;
        cout <<"\t\t\t---------------------" << endl;
        cout <<"\n\t1. Calculo del volumen" << endl;
        cout <<"\n\t2. Calculo del perimetro" << endl;
        cout <<"\n\t3. Calculo del area" << endl;
        cout <<"\n\t4. Salir del programa" << endl;
        
        /*REFERENCIA
            Esto sirve para que un modulo tenga un formato de variable,
            tambien para que sea mas facil el usarlo  en procesos, como
            lo estamos haciendo, en este ejemplo, la variable "opcion",
            es un tipo de dato numerico y nos sirve para  darle el uso 
            que queremos al activar el do-while y el activar los casos
            de nuestro switch.*/

        int opcion = obtener1();
    do
    {
        switch (opcion) {
            case 1:
                menuVolumen();
                break;
            case 2:
                menuPerimetro();
                break;
            case 3:
                menuArea();
                break;
            case 4:
                adios();
                break;
            default:
                vacio();
                break;

        }

        /*VALIDACIONES
            Es para que el valor que accione en el do-while
            este  entre las   opciones  que hemos designado
            como validas,  de lo contrario, se buguea.*/

    } while (opcion <= 1 && opcion >= 4);
    
}