// TP3 Actividad 1g (con verificación de igualdad)
#include <iostream> 
using namespace std; 
int main () 
{ 
int NUM1; 
int NUM2; 
std::cout << "este programa te dira que numero es mas grande" << std::endl; 
cout<< "ingrese el primer numero"<< endl; 
std::cin >> NUM1; 
cout<<"ingrese el segundo numero"<< endl; 
cin>> NUM2; 
if (NUM1>NUM2) 
{ 
cout<<"el numero mas grande es el: "<< NUM1; 
} 
else if (NUM1 == NUM2) 
{ 
cout<<" ambos numeros son iguales"<< endl; 
} 
else 
{ 
cout<<"el numero mas grande es el: "<< NUM2; 
} 
return 0; 
}