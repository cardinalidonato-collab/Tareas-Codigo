// TP3 Actividad 2c (tres valores distintos)
#include <iostream> 
using namespace std; 
 
int main() { 
int A, B, C; 
 
cout << "Ingrese tres valores distintos: " << endl; 
cin >> A >> B >> C; 
 
if (A == B || A == C || B == C) { 
cout << "ALERTA!! se encontraron valores iguales" << endl; 
}  
else { 
if (A > B && A > C) { 
cout << "el mayor es: " << A << endl; 
}  
else if (B > A && B > C) { 
cout << "el mayor es: " << B << endl; 
}  
else { 
cout << "el mayor es: " << C << endl; 
} 
if (A < B && A < C) { 
cout << "el menor es: " << A << endl; 
}  
else if (B < A && B < C) { 
cout << "el menor es: " << B << endl; 
}  
else { 
cout << "el menor es: " << C << endl; 
} 
} 
return 0; 
}