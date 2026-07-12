// TP4 Ejercicio 5
#include <iostream> 
using namespace std; 
 
int main() 
{ 
    int opcion = 0; 
    float saldo = 10000; 
    float monto; 
 
    while (opcion != 4) 
    { 
        cout << endl; 
        cout << "------ cajero automatico ------" << endl; 
        cout << "1. consultar saldo" << endl; 
        cout << "2. depositar dinero" << endl; 
        cout << "3. retirar dinero" << endl; 
        cout << "4. salir" << endl; 
        cout << "opcion: "; 
        cin >> opcion; 
 
        switch (opcion) 
        { 
            case 1: 
                cout << "saldo actual: $" << saldo << endl; 
                break; 
 
            case 2: 
                cout << "ingrese el monto a depositar: "; 
                cin >> monto; 
                saldo = saldo + monto; 
                cout << "deposito realizado." << endl; 
                break; 
 
            case 3: 
                cout << "ingrese el monto a retirar: "; 
                cin >> monto; 
 
                if (monto <= saldo) 
                { 
                    saldo = saldo - monto; 
                    cout << "retiro realizado." << endl; 
                } 
                else 
                { 
                    cout << "saldo insuficiente." << endl; 
                } 
 
                break; 
 
            case 4: 
                cout << "gracias por utilizar el cajero." << endl; 
                break; 
 
            default: 
                cout << "opcion incorrecta." << endl; 
        } 
    } 
 
    return 0; 
}