// TP4 Ejercicio 2
#include <iostream> 
using namespace std; 
 
int main() 
{ 
    int n; 
 
    cout << "Ingrese un numero: "; 
    cin >> n; 
 
    for (int fila = 1; fila <= n; fila++) 
    { 
        for (int columna = 1; columna <= n; columna++) 
        { 
            if (fila + columna <= n + 1) 
            { 
                cout << "* "; 
            } 
        } 
 
        cout << endl; 
    } 
 
    return 0; 
}