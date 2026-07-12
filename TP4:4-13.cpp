// TP4 Ejercicio 4
#include <iostream> 
using namespace std; 
 
int main() 
{ 
    int cantidad; 
    string nombre; 
    int ventas; 
 
    cout << "Ingrese la cantidad de vendedores: "; 
    cin >> cantidad; 
 
    cout << endl; 
 
    for (int i = 1; i <= cantidad; i++) 
    { 
        cout << "Nombre del vendedor " << i << ": "; 
        cin >> nombre; 
 
        cout << "Cantidad de ventas: "; 
        cin >> ventas; 
 
        cout << endl; 
        cout << nombre << ": " << ventas << " ventas" << endl; 
        cout << endl; 
    } 
 
    return 0; 
}