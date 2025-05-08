#include <iostream>

using namespace std;

int main(){


    int OP;
    cout << "--------No encuentro una direccon. ---------"<< endl;
    cout << "1. Tengo telefono" << endl;
    cout << "2. Tengo algún amigo que conozca la dirección" << endl;
    cout << "3. Conozco alguna referencia de la misma" << endl;
    cout << "4. Tengo a alguien esperando en la dirección" << endl;
    cout << "5. Hay policías de transito cerca" << endl;
    cout << "Escoja una opción: " << endl;
    cin >> OP;

    if (OP == 1)
    {      
        bool anwser;
        cout << "Tengo telefono? " << endl;
        cout << "Escriba 1 para si o 0 para no: " << endl;
        cin >> anwser;
        if (anwser == 1)
        {
            cout << "Usar waze para marcar la dirección y seguir la ruta. " << endl;
        } else {
            cout << "Preguntarle a personas de la calle algún punto de referencia para poder llegar. " << endl;
        }
    } 
    else if  (OP == 2)
    {   
        bool anwser;
        cout << "Tengo algún amigo que conozca la dirección? " << endl;
        cout << "Escriba 1 para si o 0 para no: " << endl;
        cin >> anwser;
        if (anwser == 1)
        {
            cout << "LLamarle y preguntarle para que me de referencias.	 " << endl;
        } else {
            cout << "Preguntarle a personas de la calle algún punto de referencia para poder llegar. " << endl;
        }
    } else if  (OP == 3)
    {   
        bool anwser;
        cout << "Conozco alguna referencia de la misma? " << endl;
        cout << "Escriba 1 para si o 0 para no: " << endl;
        cin >> anwser;
        if (anwser == 1)
        {
            cout << "Guiarme por si mismo con las referencias que se hasta poder llegar al destino.	 " << endl;
        } else {
            cout << "Preguntarle a personas de la calle algún punto de referencia para poder llegar. " << endl;
        }
    } else if  (OP == 4)
    {   
        bool anwser;
        cout << "Tengo a alguien esperando en la dirección? " << endl;
        cout << "Escriba 1 para si o 0 para no: " << endl;
        cin >> anwser;
        if (anwser == 1)
        {
            cout << "LLamarle y pedirle su ubicación en vivo.	 " << endl;
        } else {
            cout << "Preguntarle a personas de la calle algún punto de referencia para poder llegar. " << endl;
        }
    }  else if  (OP == 5)
    {   
        bool anwser;
        cout << "Hay policías de transito cerca? " << endl;
        cout << "Escriba 1 para si o 0 para no: " << endl;
        cin >> anwser;
        if (anwser == 1)
        {
            cout << "Preguntarles por la dirrecion y que me guien por donde es.	 " << endl;
        } else {
            cout << "Preguntarle a personas de la calle algún punto de referencia para poder llegar. " << endl;
        }
    } else {
        cout << "No seguiste instrucciones. " << endl;
    }

}
