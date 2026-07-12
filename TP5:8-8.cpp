// TP5 Ejercicio 8
#include <iostream> 
using namespace std; 
int main() { 
    int x, resultado = 1; 
    cout << "Ingrese un número: "; 
    cin >> x; 
    for (int i = 1; i <= 5; i++) { 
        resultado = resultado * x; 
    } 
    cout << x << " elevado a la quinta es igual a " << resultado << endl; 
    return 0; 
}