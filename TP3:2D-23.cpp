// TP3 Actividad 2d (promedio notas)
#include <iostream> 
using namespace std; 
 
int main() { 
float n1, n2, n3, promedio; 
cout << "Ingrese las tres notas del alumno: " << endl; 
cin >> n1 >> n2 >> n3; 
promedio = (n1 + n2 + n3) / 3; 
if (promedio >= 7) { 
cout << "TEA" << endl; 
} else if (promedio >= 4) { 
cout << "TEP" << endl; 
} else { 
cout << "TED" << endl; 
} 
return 0; 
}