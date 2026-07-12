// TP4 Ejercicio 3
#include <iostream> 
using namespace std; 
 
int main() 
{ 
    int n; 
 
    cout << "Ingrese un numero: "; 
    cin >> n; 
 
    for (int i = 1; i <= n; i++) 
    { 
        for (int j = 1; j <= n; j++) 
        { 
            cout << i * j << " "; 
        } 
 
        cout << endl; 
    } 
 
    return 0; 
}