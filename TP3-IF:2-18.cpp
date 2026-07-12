// TP3-IF Ejercicio 2 (Descuentos)
#include <iostream> 
using namespace std; 

int main() { 
    float precioUnitario, subtotal, descuento, totalFinal; 
    int cantidad; 

    cout << "Ingrese el precio unitario del producto: $"; 
    cin >> precioUnitario; 
    cout << "Ingrese la cantidad comprada: "; 
    cin >> cantidad; 

    subtotal = precioUnitario * cantidad; 

    if (cantidad < 5) { 
        descuento = 0; 
    } else if (cantidad >= 5 && cantidad <= 10) { 
        descuento = subtotal * 0.10;    
    } else {        
        descuento = subtotal * 0.20; 
    } 

    totalFinal = subtotal - descuento; 

    cout << "-------------------------" << endl; 
    cout << "Subtotal: $" << subtotal << endl; 
    cout << "Descuento: $" << descuento << endl; 
    cout << "Total a pagar: $" << totalFinal << endl; 

    return 0; 
}