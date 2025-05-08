#include <iostream>
using namespace std;

int main() {
    int decision;

    cout << "Estás en una entrevista de trabajo y te preguntan:\n";
    cout << "\"¿Por qué deberíamos contratarte?\"\n";
    cout << "¿Qué respondes?\n";
    cout << "1. Porque necesito el dinero\n";
    cout << "2. Porque tengo las habilidades y experiencia necesarias\n";
    cout << "3. Porque nadie más quiere este trabajo\n";
    cout << "4. Porque me gusta aprender y mejorar constantemente\n";
    cout << "5. Porque llegué temprano hoy\n";
    cout << "Elige una opción (1-5): ";
    cin >> decision;

    switch(decision) {
        case 1:
            cout << "El entrevistador piensa que no estás motivado. No te contratan.\n";
            break;
        case 2:
            cout << "Buena respuesta. Impresionas al entrevistador. ¡Te contratan!\n";
            break;
        case 3:
            cout << "Respuesta negativa. No te contratan.\n";
            break;
        case 4:
            cout << "Respuesta excelente. Ven tu potencial. ¡Te ofrecen el puesto!\n";
            break;
        case 5:
            cout << "No es suficiente. No te contratan.\n";
            break;
        default:
            cout << "Opción no válida.\n";
    }

    return 0;
}
