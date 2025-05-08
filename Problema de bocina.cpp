#include <iostream>
using namespace std;

int main (){
	char a, b, c, d, e, opcion;
	cout << "Una computadora con Windows 11 no le detecta las vocinas que lleva"<<endl<<endl;
	cout << "Las soluciones pueden ser: "<<endl;
	cout << "a. Berificar si tiene todos los drivers intalados "<<endl;
	cout << "b. Quitar la tapadera de la computadora y saber si estan coenctados "<<endl;
	cout << "c. Berificar las actualizacion mas recientes"<<endl;
	cout << "d. Llevarlo con un tecnico"<<endl;
	cout << "e. Solo usar audifonos conectados"<<endl;
	cin >> opcion;
	
	switch (opcion){
	case 'a':
		cout << "Berificar si tiene todos los drivers intalados 5/5 :)";
		break;
	case 'b':
		cout << "Quitar la tapadera de la computadora y saber si estan coenctados 4/5 :)";
		break;
	case 'c':
		cout << "Berificar las actualizacion mas recientes 3/5 ";
	case 'd':
		cout << "Pagar los servicios de un tecnico 2/5";
		break;
	case 'e':
		cout << "Solo usar audifonos conectados y hacerlo despues 1/5 :(";
		break;
	default:
		cout << "No hare nada 0/5 :(";
	}
	
	return 0;
}
