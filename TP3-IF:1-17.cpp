// TP3-IF Ejercicio 1 (Usuario y Contraseña)
#include <iostream> 
using namespace std; 

int main() { 
    string usuario, contraseña; 

    cout << "Ingrese usuario: "; 
    cin >> usuario; 
    cout << "Ingrese contraseña: "; 
    cin >> contraseña; 

    if (usuario == "admin" && contraseña == "1234") { 
        cout << "Acceso permitido" << endl; 
    } else { 
        cout << "Usuario o contraseña incorrectos" << endl; 
    } 

    return 0; 
}