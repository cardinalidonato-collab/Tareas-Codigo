// TP5 Ejercicio 7
#include <iostream> 
using namespace std; 
int main() { 
    int cantidadImpares = 0; 
    int sumaImpares = 0; 
    for (int i = 1; i <= 300; i++) { 
        if (i % 2 != 0) {  
            cantidadImpares = cantidadImpares + 1; 
            sumaImpares = sumaImpares + i; 
        } 
    } 
    cout << "Cantidad de impares: " << cantidadImpares << endl; 
    cout << "Suma de los impares: " << sumaImpares << endl; 
    return 0; 
}