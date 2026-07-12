// TP3 Actividad 2a (positivo/negativo/nulo)
#include <iostream> 
using namespace std; 
 
int main() { 
    int num; 
    cout << "Ingrese un numero entero: "; 
    cin >> num; 
 
    if (num > 0) { 
        cout << "el numero es positivo" << endl; 
    } else if (num < 0) { 
        cout << "el numero es negativo" << endl; 
    } else { 
        cout << "el numero es nulo" << endl; 
    } 
    return 0; 
}