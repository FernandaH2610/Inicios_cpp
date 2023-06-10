#include <iostream>
#include <cstdlib>

using namespace std;

void menuPrincipal();

//Menus secundarios
void menuVolumen();
void menuPerimetro();
void menuArea();

//Menus Volumenes
void volumenCubo();
/*void volumenEsfera();
void volumenCono();
void volumenCilindro();

//Menus Perimetros
void perimetroCuadrado();
void perimetroRectangulo();
void perimetroTriangulo();
void perimetroCircunferencia();

//Menu Area
void areaTriangulo();
void areaCirculo();
void areaRectangulo();
void areaCuadrado();*/

//Extas
void adios();
void vacio();

//Modulo para obtener la variable del menu 1
int obtener1();

//Modulo para obtener la variable del menu 2
int obtener2();


//Modulo para solicitar los datos

//VOLUMEN

int obtenerVolumenCubo();
/*int obtenerVolumenEsfera();
int obtenerVolumenCono();
int obtenerVolumenCilindro();*/


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



void adios(){
    cout << "Gracias por usar este programa! Hasta la proxima";
}

void vacio(){
    cout << "Elije una opcion valida por favor";
}

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

int obtenerVolumenCubo(){

    int ladoA;
    int ladoB;
    int ladoC;
    int vCubo;

    cout << "Ingresa el valor del lado a" << endl;
    cin >> ladoA;
    cout << "Ingresa el valor del lado b" << endl;
    cin >> ladoB;
    cout << "Ingresa el valor del lado c" << endl;
    cin >> ladoC;
    vCubo = (ladoA * ladoB * ladoC);


    return vCubo;
}
/*int obtenerVolumenEsfera(){

}
int obtenerVolumenCono(){

}
int obtenerVolumenCilindro(){

}*/


/*void volumenCubo();
void volumenEsfera();
void volumenCono();
void volumenCilindro();*/

void volumenCubo(){

    int vCubo = obtenerVolumenCubo();
    cout << "Con gusto te brindo la informacion que necesitas, de momento, la respuesta es la siguiente :   " << vCubo;
}




void menuVolumen(){
        
        system("cls");
        cout <<"\n\n\t\t\t\t CALCULO DEL VOLUMEN" << endl;
        cout <<"\t\t\t---------------------" << endl;
        cout <<"\n\t1. Calculo del volumen de un cubo" << endl;
        cout <<"\n\t2. Calculo del volumen de una esfera " << endl;
        cout <<"\n\t3. Calculo del volumen de un cono" << endl;
        cout <<"\n\t4. Calculo del volumen de un cilindro" << endl;
        cout <<"\n\t5. Salir del programa" << endl;

        int opcion = obtener2();
    do
    {
        switch (opcion) {
            case 1:
                volumenCubo();
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


void menuPerimetro(){
    cout << "No puedo Marta";
}
void menuArea(){
    cout << "No puedo Marta";
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