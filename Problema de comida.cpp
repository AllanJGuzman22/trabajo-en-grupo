#include <iostream>
using namespace std;

int main (){
	char a, b, c, d, e, opcion;
	cout << "No tienes nada de que comer"<<endl<<endl;
	cout << "Las soluciones pueden ser: "<<endl;
	cout << "a. Pedir a domicilio "<<endl;
	cout << "b. Ir al super para comprar comida "<<endl;
	cout << "c. Revisar la refri"<<endl;
	cout << "d. Almorzar con amigos para que se arme copperacha "<<endl;
	cout << "e. Almorzar con Mama"<<endl;
	cin >> opcion;
	
	switch (opcion){
	case 'a':
		cout << "Pedir a domicilio ";
		break;
	case 'b':
		cout << "Ir al super para comprar comida";
		break;
	case 'c':
		cout << "Revisar la refri ";
	case 'd':
		cout << "Almorzar con amigos para que se arme copperacha";
		break;
	case 'e':
		cout << "Almorzar con Mama :)";
		break;
	default:
		cout << "Aguantar el hambre ";
	}
	
	return 0;
}
	
