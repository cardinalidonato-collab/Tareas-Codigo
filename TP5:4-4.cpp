// TP5 Ejercicio 4
#include <iostream> 
using namespace std; 
int main() { 
    for (int i = 1; i <= 25; i++) { 
        cout << i * 11; 
        if (i < 25) { 
            cout << " - "; 
        } 
    } 
    cout << endl; 
    return 0; 
}