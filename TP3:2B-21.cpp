// TP3 Actividad 2b (dos números)
#include <iostream> 
using namespace std; 
 
int main()  
{ 
float n1; 
float n2; 
 
cout << "Ingrese el primer numero: "<<endl; 
cin >> n1; 
cout<<"Ingrese el segundo numero: "<<endl; 
cin>> n2; 
 
if (n1 > n2)  
{ 
cout << "Suma: " << n1 + n2 << endl; 
cout << "Diferencia: " << n1 - n2 << endl; 
}  
else  
{ 
cout << "Producto: " << n1 * n2 << endl; 
if (n2 == 0)  
{  
cout << "no se puede dividir por cero." << endl; 
}  
else  
{ 
cout << "Division: " << n1 / n2 << endl; 
} 
} 
return 0; 
}