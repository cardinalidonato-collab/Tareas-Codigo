// TP5 Ejercicio 6
#include <iostream> 
using namespace std; 
int main() { 
    int suma = 0; 
    cout << "Números pares: "; 
    for (int i = 2; i <= 100; i = i + 2) { 
        cout << i << " "; 
        suma = suma + i; 
    } 
    cout << endl << "Sumatoria total: " << suma << endl; 
    return 0; 
}