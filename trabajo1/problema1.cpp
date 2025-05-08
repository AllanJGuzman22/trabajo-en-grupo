#include <iostream>
using namespace std;

int main(){
    int decision;
    cout << "tienes un examen super importante mañana. ¿que decides hacer? \n";
    cout <<"1. estudiar toda la noche\n";
    cout <<"2. estudiar poco y dormir como bebe\n";
    cout <<"3. no estudiar y jugar toda la noche\n";
    cout <<"4. ver videos en youtube sobre esos temas\n";
    cout <<"5. pedir ayuda a un compañero o a Dios\n";
    cout <<"elegir entre (1-5): ";
    cin >> decision;

    switch(decision) {
        case 1:
            cout << "Estudiaste mucho, pero llegaste muy cansado. Pasas con dificultad.\n";
            break;
        case 2:
            cout << "Estudiaste y descansaste como bebe. Sacas una buena nota.\n";
            break;
        case 3:
            cout << "No estudiaste nada y jugaste. Repruebas el examen.\n";
            break;
        case 4:
            cout << "Aprendiste lo básico. Pasas el examen con una nota promedio.\n";
            break;
        case 5:
            cout << "Tu compañero te explicó bien y Dios te acompaño. Sacas una muy buena nota.\n";
            break;
        default:
            cout << "Opción no válida.\n";
    }

    return 0;
}
