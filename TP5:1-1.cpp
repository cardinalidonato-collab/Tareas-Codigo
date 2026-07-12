// TP5 Ejercicio 1
#include <iostream> 
using namespace std; 
int main() { 
    int aprobados = 0; 
    int reprobados = 0; 
    float nota; 
    for (int f = 1; f <= 10; f++) { 
        cout << "Ingrese nota " << f << ": "; 
        cin >> nota; 
        if (nota >= 7) { 
            aprobados = aprobados + 1; 
        } else { 
            reprobados = reprobados + 1; 
        } 
    } 
    cout << "Aprobados: " << aprobados << endl; 
    cout << "Reprobados: " << reprobados << endl; 
    return 0; 
}