// TP5 Ejercicio 5
#include <iostream> 
using namespace std; 
int main() { 
    int n, numero; 
    int pares = 0, impares = 0; 
    cout << "¿Cuántos números va a ingresar? "; 
    cin >> n; 
    for (int i = 1; i <= n; i++) { 
        cout << "Ingrese número " << i << ": "; 
        cin >> numero; 
        if (numero % 2 == 0) { 
            pares = pares + 1; 
        } else { 
            impares = impares + 1; 
        } 
    } 
    cout << "Pares: " << pares << endl; 
    cout << "Impares: " << impares << endl; 
    return 0; 
}