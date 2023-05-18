#include <iostream>
#include <cstdio> // Para utilizar la función getchar


using namespace std;
int main() {
	int opcion;
	double temperatura;
	
	do {
		// Mostrar el menú
		cout << "Menú de conversiones:" << endl;
		cout << "1. Fahrenheit a Celsius" << endl;
		cout << "2. Celsius a Fahrenheit" << endl;
		cout << "3. Salir" << endl;
		cout << "Elige una opción: ";
		cin >> opcion;
		
		switch (opcion) {
		case 1:
            //Mostrar Fahrenheit a Celsius
			cout << "Ingresa la temperatura en grados Fahrenheit: ";
			cin >> temperatura;
			cout << temperatura << " grados Fahrenheit = " << (temperatura - 32.0) * 5.0 / 9.0 << " grados Celsius" << endl;
            //Limpiar pantalla
			system("pause");
			cout << "Presiona Enter para continuar...";
			system("cls");
			getchar();
			break;
		case 2:
			cout << "Ingresa la temperatura en grados Celsius: ";
			cin >> temperatura;
			cout << temperatura << " grados Celsius = " << (temperatura * 9.0 / 5.0) + 32.0 << " grados Fahrenheit" << endl;
			//Limpiar pantalla
            system("pause");
			cout << "Presiona Enter para continuar...";
			system("cls");
			getchar();
			break;
		case 3:
			cout << "Saliendo del programa..." << endl;
			break;
		default:
			cout << "Opción inválida. Por favor, elige una opción válida." << endl;
			break;
		}
	} while (opcion != 3);
	
	return 0;
}
