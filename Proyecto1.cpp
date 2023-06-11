#include <iostream>
#include <cstdlib>

using namespace std;

void menuPrincipal();
int obtener1();
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

int main() {
    menuPrincipal();
    return 0;
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

//Obtener Opciones de menus
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


//VOLUMEN
void menuVolumen(){
        
        system("cls");
        cout <<"\n\n\t\t\t\t CALCULO DEL VOLUMEN" << endl;
        cout <<"\t\t\t---------------------" << endl;
        cout <<"\n\t1. Calculo del volumen de un cubo" << endl;  //Done
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
                volumenEsfera();
                break;
            case 3:
                volumenCono();
                break;
            case 4:
                volumenCilindro();
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
    cout << "Con gusto te brindo la informacion que necesitas, de momento, la respuesta es la siguiente :   " << vCubo;
}
void volumenEsfera(){
    int vEsfera = obtenerVolumenEsfera();
    cout << "Con gusto te brindo la informacion que necesitas, de momento, la respuesta es la siguiente :   " << vEsfera;
}
void volumenCono(){
    int vCono = obtenerVolumenCono();
    cout << "Con gusto te brindo la informacion que necesitas, de momento, la respuesta es la siguiente :   " << vCono;
}
void volumenCilindro(){
    int vCilindro = obtenerVolumenCilindro();
    cout << "Con gusto te brindo la informacion que necesitas, de momento, la respuesta es la siguiente :   " << vCilindro;
}

//PERIMETRO
void menuPerimetro(){
        
        system("cls");
        cout <<"\n\n\t\t\t\t CALCULO DEL PERIMETRO" << endl;
        cout <<"\t\t\t---------------------" << endl;
        cout <<"\n\t1. Calculo del perimetro de un cuadrado" << endl;  //Done
        cout <<"\n\t2. Calculo del perimetro de una circunsferencia " << endl;
        cout <<"\n\t3. Calculo del perimetro de un rectangulo" << endl;
        cout <<"\n\t4. Calculo del perimetro de un triangulo" << endl;
        cout <<"\n\t5. Salir del programa" << endl;

        int opcion = obtener2();
    do
    {
        switch (opcion) {
            case 1:
                perimetroCuadrado();
                break;
            case 2:
                perimetroCircunferencia();
                break;
            case 3:
                perimetroRectangulo();
                break;
            case 4:
                perimetroTriangulo();
                break;
            default:
                vacio();
                break;

        }

    } while (opcion <= 1 && opcion >= 4);
            
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
    cout << "Con gusto te brindo la informacion que necesitas, de momento, la respuesta es la siguiente :   " << pCuadrado;
}
void perimetroCircunferencia(){
    int pCircunferencia = obtenerPerimetroCircunferencia();
    cout << "Con gusto te brindo la informacion que necesitas, de momento, la respuesta es la siguiente :   " << pCircunferencia;
}
void perimetroRectangulo(){
    int pRectangulo = obtenerPerimetroRectangulo();
    cout << "Con gusto te brindo la informacion que necesitas, de momento, la respuesta es la siguiente :   " << pRectangulo;
}
void perimetroTriangulo(){
    int pTriangulo = obtenerPerimetroTringulo();
    cout << "Con gusto te brindo la informacion que necesitas, de momento, la respuesta es la siguiente :   " << pTriangulo;

}

//AREA

void menuArea(){
        
        system("cls");
        cout <<"\n\n\t\t\t\t CALCULO DEL PERIMETRO" << endl;
        cout <<"\t\t\t---------------------" << endl;
        cout <<"\n\t1. Calculo del area de un cuadrado" << endl;  //Done
        cout <<"\n\t2. Calculo del area de un circulo " << endl;
        cout <<"\n\t3. Calculo del area de un rectangulo" << endl;
        cout <<"\n\t4. Calculo del area de un triangulo" << endl;
        cout <<"\n\t5. Salir del programa" << endl;

        int opcion = obtener2();
    do
    {
        switch (opcion) {
            case 1:
                areaCuadrado();
                break;
            case 2:
                areaCirculo();
                break;
            case 3:
                areaRectangulo();
                break;
            case 4:
                areaTriangulo();
                break;
            default:
                vacio();
                break;

        }

    } while (opcion <= 1 && opcion >= 4);
            
}

void areaTriangulo(){
    int aTriangulo = obtenerAreaTriangulo();
    cout << "Con gusto te brindo la informacion que necesitas, de momento, la respuesta es la siguiente :   " << aTriangulo;
}
void areaCirculo(){
    int aCirculo = obtenerAreaCirculo();
    cout << "Con gusto te brindo la informacion que necesitas, de momento, la respuesta es la siguiente :   " << aCirculo;
}
void areaRectangulo(){
    int aRectangulo = obtenerAreaRectangulo();
    cout << "Con gusto te brindo la informacion que necesitas, de momento, la respuesta es la siguiente :   " << aRectangulo;
}
void areaCuadrado(){
    int aCuadrado = obtenerAreaCuadrado();
    cout << "Con gusto te brindo la informacion que necesitas, de momento, la respuesta es la siguiente :   " << aCuadrado;
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
    int aCuadrado;

    cout << "Ingresa el valor del lado a" << endl;
    cin >> ladoA;
    cout << "Ingresa el valor del lado b" << endl;
    cin >> ladoB;
    aCuadrado = (ladoA * ladoB);


    return aCuadrado;
}
double obtenerAreaCuadrado(){
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

void adios(){
    cout << "Gracias por usar este programa! Hasta la proxima";
}

void vacio(){
    cout << "Elije una opcion valida por favor";
}