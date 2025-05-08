#include <iostream>

using namespace std;

int main(){


    int OP;
    cout << "--------No tengo carga en mi laptop. ---------"<< endl;
    cout << "1. Tengo cargador" << endl;
    cout << "2. Estoy en mi casa" << endl;
    cout << "3. Estoy en el trabajo" << endl;
    cout << "4. Tengo algun restarante cerca" << endl;
    cout << "5. Tengo cargador portatil" << endl;
    cout << "Escoja una opción: " << endl;
    cin >> OP;

    if (OP == 1)
    {      
        bool anwser;
        cout << "Tengo cargador? " << endl;
        cout << "Escriba 1 para si o 0 para no: " << endl;
        cin >> anwser;
        if (anwser == 1)
        {
            cout << "Buscar un enchufe y poner la laptop a cargar. " << endl;
        } else {
            cout << "Buscar a alguien que pueda prestar cargador. " << endl;
        }
    } 
    else if  (OP == 2)
    {   
        bool anwser;
        cout << "Estoy en mi casa? " << endl;
        cout << "Escriba 1 para si o 0 para no: " << endl;
        cin >> anwser;
        if (anwser == 1)
        {
            cout << "Buscar mi cargador y poner la laptop a cargar. " << endl;
        } else {
            cout << "Buscar un lugar para conectar la laptop. " << endl;
        }
    } else if  (OP == 3)
    {   
        bool anwser;
        cout << "Estoy en el trabajo?  " << endl;
        cout << "Escriba 1 para si o 0 para no: " << endl;
        cin >> anwser;
        if (anwser == 1)
        {
            cout << "Buscar un enchufe cerca y poner a cargar la laptop. " << endl;
        } else {
            cout << "Buscar un lugar para cargar la laptop. " << endl;
        }
    } else if  (OP == 4)
    {   
        bool anwser;
        cout << "Tengo algun restarante cerca? " << endl;
        cout << "Escriba 1 para si o 0 para no: " << endl;
        cin >> anwser;
        if (anwser == 1)
        {
            cout << "Entar comprar una bebida y cargar la laptop en el restaurante. " << endl;
        } else {
            cout << "Buscar algun lugar para cargarla. " << endl;
        }
    }  else if  (OP == 5)
    {   
        bool anwser;
        cout << "Tengo cargador portatil? " << endl;
        cout << "Escriba 1 para si o 0 para no: " << endl;
        cin >> anwser;
        if (anwser == 1)
        {
            cout << "Usarlo para cargar la laptop. " << endl;
        } else {
            cout << "Buscar un lugar para ponerla a cargar. " << endl;
        }
    } else {
        cout << "No seguiste instrucciones. " << endl;
    }

}
