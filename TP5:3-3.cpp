// TP5 Ejercicio 3
#include <iostream> 
using namespace std; 
int main() { 
    float numero; 
    cout << "Ingrese un número: "; 
    cin >> numero; 
    while (numero >= 0.01) { 
        numero = numero / 2; 
    } 
    cout << "El número final es: " << numero << endl; 
    return 0; 
}