#include <iostream>
#include <cstdlib>

using namespace std;

void menuPrincipal();
int obtener1(); //Sirve como variable
int obtener2();
void menuVolumen();
double obtenerVolumenEsfera();
double obtenerVolumenCono();
double obtenerVolumenCilindro();
void volumenCubo();
void volumenEsfera();
double obtenerVolumenCono();
double obtenerVolumenCilindro();
void volumenCubo();
void volumenEsfera();
void volumenCono();
void volumenCilindro();
void menuPerimetro();
int obtenerPerimetroCuadrado();
double obtenerPerimetroCircunferencia();
int obtenerPerimetroRectangulo();
int obtenerPerimetroTringulo();
void perimetroCuadrado();
void perimetroCircunferencia();
void perimetroRectangulo();
void perimetroTriangulo();
void menuArea();
void areaTriangulo();
void areaCirculo();
void areaRectangulo();
void areaCuadrado();
double obtenerAreaTriangulo();
double obtenerAreaCirculo();
double obtenerAreaRectangulo();
double obtenerAreaCuadrado();
double obtenerAreaCuadrado();
void adios();
void vacio();
void limpiar();

int main() {
    menuPrincipal();
    return 0;
}


void menuPrincipal(){

        int opcion;
    do
    {
        system("cls");
        cout <<"\t\t\t\tMenu Principal" << endl;
        cout <<"\t\t\t----------------------------" << endl;
        cout <<"\t1. Calculo del volumen" << endl << endl;
        cout <<"\t2. Calculo del perimetro" << endl << endl;
        cout <<"\t3. Calculo del area" << endl << endl;
        cout <<"\t4. Salir del programa" << endl << endl;
        opcion = obtener1();
        switch (opcion) {
            case 1:
                menuVolumen();
                limpiar();
                break;
            case 2:
                menuPerimetro();
                limpiar();
                break;
            case 3:
                menuArea();
                limpiar();
                break;
            case 4:
                adios();
                limpiar();
                break;
            default:
                vacio();
                limpiar();
                break;

        }

    } while (opcion != 4);
}

//Obtener Opciones de menus
int obtener1(){
    int opcion1;
    cout << "Ingrese la opcion que desea ejecutar: " << endl;
    cin >> opcion1;
    return opcion1;
}
int obtener2(){
    int opcion2;
    cout << "Ingrese la opcion que desea ejecutar:" << endl;
    cin >> opcion2;
    return opcion2;
}


//VOLUMEN
void menuVolumen(){

        int opcion;
        
    do
    {
        system("cls");
        cout <<"\t\t\t\t CALCULO DEL VOLUMEN" << endl;
        cout <<"\t\t\t--------------------------------------" << endl;
        cout <<"\t1. Calculo del volumen de un cubo" << endl << endl;  //Done
        cout <<"\t2. Calculo del volumen de una esfera " << endl << endl;
        cout <<"\t3. Calculo del volumen de un cono" << endl << endl;
        cout <<"\t4. Calculo del volumen de un cilindro" << endl << endl;
        cout <<"\t5. Salir al menu principal" << endl << endl;
        opcion = obtener2();

        switch (opcion) {
            case 1:
                volumenCubo();
                limpiar();
                break;
            case 2:
                volumenEsfera();
                limpiar();
                break;
            case 3:
                volumenCono();
                limpiar();
                break;
            case 4:
                volumenCilindro();
                limpiar();
                break;
            case 5: 
                adios();
                limpiar();
                break;
            default:
                vacio();
                limpiar();
                break;

        }
    }
    while (opcion != 5);
            
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

double obtenerVolumenEsfera(){
    int radio;
    double vEsfera;
    double pi = 3.14159265358979323846;
    double K = 1.33333;
    cout << "Ingresa el valor del radio: " << endl;
    cin >> radio;
    vEsfera = K*pi*(radio*radio*radio);
    return vEsfera;
}
double obtenerVolumenCono(){
    int radio;
    int h;
    double vCono;
    double pi = 3.14159265358979323846;
    double K = 3;
    cout << "Ingresa el valor del radio: " << endl;
    cin >> radio;
    cout << "Ingresa el valor de la altura: " << endl;
    cin >> h;
    vCono = (pi*(radio*radio))/h;
    return vCono;

}
double obtenerVolumenCilindro(){
    int radio;
    int h;
    double vCilindro;
    double pi = 3.14159265358979323846;
    double K = 3;
    cout << "Ingresa el valor del radio: " << endl;
    cin >> radio;
    cout << "Ingresa el valor de la altura: " << endl;
    cin >> h;
    vCilindro = (pi*(radio*radio)*h);
    return vCilindro;

}

void volumenCubo(){

    int vCubo = obtenerVolumenCubo();
    cout << "Con gusto te brindo la informacion que necesitas, de momento, la respuesta es la siguiente :   " << vCubo << endl;
}

void volumenEsfera(){
    int vEsfera = obtenerVolumenEsfera();
    cout << "Con gusto te brindo la informacion que necesitas, de momento, la respuesta es la siguiente :   " << vEsfera << endl;
}
void volumenCono(){
    int vCono = obtenerVolumenCono();
    cout << "Con gusto te brindo la informacion que necesitas, de momento, la respuesta es la siguiente :   " << vCono << endl;
}
void volumenCilindro(){
    int vCilindro = obtenerVolumenCilindro();
    cout << "Con gusto te brindo la informacion que necesitas, de momento, la respuesta es la siguiente :   " << vCilindro << endl;
}

//PERIMETRO
void menuPerimetro(){
        

        int opcion;
    do
    {
        system("cls");
        cout <<"\t\t\t\t CALCULO DEL PERIMETRO" << endl;
        cout <<"\t\t\t------------------------------------------" << endl;
        cout <<"\t1. Calculo del perimetro de un cuadrado" << endl << endl;  //Done
        cout <<"\t2. Calculo del perimetro de una circunsferencia " << endl << endl;
        cout <<"\t3. Calculo del perimetro de un rectangulo" << endl << endl;
        cout <<"\t4. Calculo del perimetro de un triangulo" << endl << endl;
        cout <<"\t5. Salir al menu principal" << endl << endl;
        opcion = obtener2();
        switch (opcion) {
            case 1:
                perimetroCuadrado();
                limpiar();
                break;
            case 2:
                perimetroCircunferencia();
                limpiar();
                break;
            case 3:
                perimetroRectangulo();
                limpiar();
                break;
            case 4:
                perimetroTriangulo();
                limpiar();
                break;
            case 5:
                adios();
                limpiar();
                break;
            default:
                vacio();
                limpiar();
                break;

        }

    } while (opcion != 5);
            
}

int obtenerPerimetroCuadrado(){
    int ladoA;
    int ladoB;
    int ladoC;
    int ladoD;
    int pCuadrado;

    cout << "Ingresa el valor del lado a" << endl;
    cin >> ladoA;
    cout << "Ingresa el valor del lado b" << endl;
    cin >> ladoB;
    cout << "Ingresa el valor del lado c" << endl;
    cin >> ladoC;
    cout << "Ingresa el valor del lado d" << endl;
    cin >> ladoD;
    pCuadrado = (ladoA + ladoB + ladoC + ladoD);


    return pCuadrado;
}
double obtenerPerimetroCircunferencia(){
    int radio;
    double pCircunferencia;
    double pi = 3.14159265358979323846;
    cout << "Ingresa el valor del radio: " << endl;
    cin >> radio;
    pCircunferencia = 2*pi*radio;
    return pCircunferencia;

}
int obtenerPerimetroRectangulo(){
    int ladoA;
    int ladoB;
    int pRectangulo;

    cout << "Ingresa el valor del lado a" << endl;
    cin >> ladoA;
    cout << "Ingresa el valor del lado b" << endl;
    cin >> ladoB;
    pRectangulo = 2*(ladoA + ladoB);


    return pRectangulo;
}
int obtenerPerimetroTringulo(){
    int ladoA;
    int ladoB;
    int ladoC;
    int pTriangulo;

    cout << "Ingresa el valor del lado a" << endl;
    cin >> ladoA;
    cout << "Ingresa el valor del lado b" << endl;
    cin >> ladoB;
    cout << "Ingresa el valor del lado c" << endl;
    cin >> ladoC;
    pTriangulo = (ladoA + ladoB + ladoC);


    return pTriangulo;
}

void perimetroCuadrado(){
    int pCuadrado = obtenerPerimetroCuadrado();
    cout << "Con gusto te brindo la informacion que necesitas, de momento, la respuesta es la siguiente :   " << pCuadrado << endl;
}
void perimetroCircunferencia(){
    int pCircunferencia = obtenerPerimetroCircunferencia();
    cout << "Con gusto te brindo la informacion que necesitas, de momento, la respuesta es la siguiente :   " << pCircunferencia << endl;
}
void perimetroRectangulo(){
    int pRectangulo = obtenerPerimetroRectangulo();
    cout << "Con gusto te brindo la informacion que necesitas, de momento, la respuesta es la siguiente :   " << pRectangulo << endl;
}
void perimetroTriangulo(){
    int pTriangulo = obtenerPerimetroTringulo();
    cout << "Con gusto te brindo la informacion que necesitas, de momento, la respuesta es la siguiente :   " << pTriangulo << endl;

}

//AREA

void menuArea(){
        

        int opcion;
    do
    {
        system("cls");
        cout <<"\t\t\t\t CALCULO DEL AREA" << endl;
        cout <<"\t\t\t--------------------------------" << endl;
        cout <<"\t1. Calculo del area de un cuadrado" << endl << endl;  //Done
        cout <<"\t2. Calculo del area de un circulo " << endl << endl;
        cout <<"\t3. Calculo del area de un rectangulo" << endl << endl;
        cout <<"\t4. Calculo del area de un triangulo" << endl << endl;
        cout <<"\t5. Salir al menu principal" << endl << endl;
        opcion = obtener2();
        switch (opcion) {
            case 1:
                areaCuadrado();
                limpiar();
                break;
            case 2:
                areaCirculo();
                limpiar();
                break;
            case 3:
                areaRectangulo();
                limpiar();
                break;
            case 4:
                areaTriangulo();
                limpiar();
                break;
            case 5:
                adios();
                limpiar();
                break;
            default:
                vacio();
                limpiar();
                break;
        }

    } while (opcion != 5);
            
}

void areaTriangulo(){
    int aTriangulo = obtenerAreaTriangulo();
    cout << "Con gusto te brindo la informacion que necesitas, de momento, la respuesta es la siguiente :   " << aTriangulo << endl;
}
void areaCirculo(){
    int aCirculo = obtenerAreaCirculo();
    cout << "Con gusto te brindo la informacion que necesitas, de momento, la respuesta es la siguiente :   " << aCirculo << endl;
}
void areaRectangulo(){
    int aRectangulo = obtenerAreaRectangulo();
    cout << "Con gusto te brindo la informacion que necesitas, de momento, la respuesta es la siguiente :   " << aRectangulo << endl;
}
void areaCuadrado(){
    int aCuadrado = obtenerAreaCuadrado();
    cout << "Con gusto te brindo la informacion que necesitas, de momento, la respuesta es la siguiente :   " << aCuadrado << endl;
}

double obtenerAreaTriangulo(){
    int altura;
    int base;
    double aTriangulo;
    cout << "Ingresa el valor de la base" << endl;
    cin >> altura;
    cout << "Ingresa el valor de la altura" << endl;
    cin >> base;
    aTriangulo = (base * altura)/2;


    return aTriangulo; 
}
double obtenerAreaCirculo(){
    int radio;
    double aCirculo;
    double pi = 3.14159265358979323846;
    cout << "Ingresa el valor del radio: " << endl;
    cin >> radio;
    aCirculo = pi*radio*radio;
    return aCirculo;
}
double obtenerAreaRectangulo(){
    int ladoA;
    int ladoB;
    int aRectangulo;

    cout << "Ingresa el valor del lado a" << endl;
    cin >> ladoA;
    cout << "Ingresa el valor del lado b" << endl;
    cin >> ladoB;
    aRectangulo = (ladoA * ladoB);


    return aRectangulo;
}
double obtenerAreaCuadrado(){
    int ladoA;
    int aCuadrado;

    cout << "Ingresa el valor del lado a" << endl;
    cin >> ladoA;
    aCuadrado = (ladoA * ladoA);
    return aCuadrado;
}

void adios(){
    cout << "Gracias por usar este programa! Hasta la proxima";
}

void vacio(){
    cout << "Elije una opcion valida por favor";
}

void limpiar(){

	system("pause");
	cout << "Presiona Enter para continuar...";
	system("cls");
	getchar();

}