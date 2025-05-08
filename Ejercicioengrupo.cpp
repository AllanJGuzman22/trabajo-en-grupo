#include <iostream>
using namespace std;
int main() {

	int op;
	cout << "Ejercicio Situaciones Ficticias"<<endl;
	cout << "Situacion: Olvidar hacer una tarea"<<endl;
	cout << "1. Subir la tarea tarde" << endl;
	cout << "2. No subir nada "<<endl;
	cout << "3. Presentarsela al catedratico personalmente " << endl;
	cout << "4. Dar una excusa por la que no se subio" << endl;
	cout << "5. Decir que no se hizo la tarea" << endl;
	cin >> op;
	switch (op)
	{
	case 1: {
		cout << "1. Hacerla y subir la tarea tarde" << endl;
		cout << "Se puede tener la mitad de la nota dependiendo del catedratico, pero con la tarea entregada"<<endl;
		break;
	}case 2: {
		cout << "2. No subir nada" << endl;
		cout << "No hay entrega, se perdera la nota de la tarea" << endl;
		break;
	}case 3: {
		cout << "3. Presentarsela tarde al catedratico personalmente" << endl;
		cout << "Decirle que no se subio la tarea pero que esta hecha, esperando que la acepte" << endl;
		break;
	}case 4: {
		cout << "4. Dar una excusa por la que no se subio" << endl;
		cout << "Esperar que se crea la excusa, sino perder la nota de la tarea" << endl;
		break;
	}case 5:
		cout << "5. Decir que no se hizo la tarea" << endl;
		cout << "Admitir que no se hizo la tarea" << endl;
		break;
	}


}