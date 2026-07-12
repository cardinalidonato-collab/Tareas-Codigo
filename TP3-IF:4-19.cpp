// TP3-IF Ejercicio 4 (Menú)
#include <iostream> 
using namespace std; 
 
int main() { 
    int opcion; 
 
    cout << "===== MENÚ =====" << endl; 
    cout << "1 - Saludar" << endl; 
    cout << "2 - Mostrar fecha" << endl; 
    cout << "3 - Mostrar mensaje motivador" << endl; 
    cout << "4 - Salir" << endl; 
    cout << "Ingrese una opción: "; 
    cin >> opcion; 
 
    switch(opcion) { 
        case 1: 
            cout << "¡Hola! Bienvenido al programa." << endl; 
            break; 
        case 2: 
            cout << "Hoy es un gran día para programar." << endl; 
            break; 
        case 3: 
            cout << "Nunca dejes de aprender." << endl; 
            break; 
        case 4: 
            cout << "Programa finalizado." << endl; 
            break; 
        default: 
            cout << "Opción inválida." << endl; 
            break; 
    } 
 
    return 0; 
}