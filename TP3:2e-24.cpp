// TP3 Actividad 2e (par/impar)
#include <iostream> 
using namespace std; 
 
int main() { 
    int N; 
    cout << "Ingrese un numero: "; 
    cin >> N; 
    if ((N / 2) * 2 == N) { 
        cout << "El numero " << N << " es par." << endl; 
    } else { 
        cout << "El numero " << N << " es impar." << endl; 
    } 
    return 0; 
}