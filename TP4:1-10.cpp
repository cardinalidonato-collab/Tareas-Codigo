// TP4 Ejercicio 1
#include <iostream> 
using namespace std; 
 
int main() { 
    int n; 
    int factorial = 1; 
 
    cout << "Ingrese un numero entero no negativo: "; 
    cin >> n; 
 
    for (int i = 1; i <= n; i++) { 
        factorial = factorial * i; 
    } 
 
    cout << "El factorial es: " << factorial << endl; 
 
    return 0; 
}