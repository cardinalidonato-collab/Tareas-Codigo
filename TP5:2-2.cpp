// TP5 Ejercicio 2
#include <iostream> 
using namespace std; 
int main() { 
    int numero; 
    int suma = 0; 
    int maximo, minimo; 
    float promedio; 
    cout << "Ingrese el valor 1: "; 
    cin >> numero; 
    suma = numero; 
    maximo = numero; 
    minimo = numero; 
    for (int i = 2; i <= 10; i++) { 
        cout << "Ingrese el valor " << i << ": "; 
        cin >> numero; 
        suma = suma + numero; 
        if (numero > maximo) { 
            maximo = numero; 
        } 
        if (numero < minimo) { 
            minimo = numero; 
        } 
    } 
    promedio = suma / 10.0; 
    cout << "Suma: " << suma << endl; 
    cout << "Máximo: " << maximo << endl; 
    cout << "Mínimo: " << minimo << endl; 
    cout << "Promedio: " << promedio << endl; 
    return 0; 
}