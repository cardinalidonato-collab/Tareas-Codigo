// TP3 Actividad 1h (tres números)
#include <iostream> 
using namespace std; 
 
int main () 
{ 
    int NUM1; 
    int NUM2; 
    int NUM3; 
 
    cout << "este programa te va a decir cual de los tres numeros es el mas grande" << endl; 
    cout << "Ingrese el primer numero: "; 
    cin >> NUM1; 
    cout << "Ingrese el segundo numero: "; 
    cin >> NUM2; 
    cout << "Ingrese el tercer numero: "; 
    cin >> NUM3; 
 
    if (NUM1 > NUM2 && NUM1 > NUM3)  
    { 
        cout << "El numero mas grande es el: " << NUM1; 
    } 
    else if (NUM2 > NUM1 && NUM2 > NUM3)  
    { 
        cout << "El numero mas grande es el: " << NUM2; 
    } 
    else if (NUM3 > NUM1 && NUM3 > NUM2)  
    { 
        cout << "El numero mas grande es el: " << NUM3; 
    } 
    else  
    { 
        cout << "son todos los numeros iguales"<<endl; 
    } 
 
    return 0; 
}