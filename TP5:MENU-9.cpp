// TP5 Menú Principal
#include <iostream> 
using namespace std; 
 
int main() 
{ 
    int opcion; 
 
    cout << "###### MENU #######" << endl; 
    cout << "1. ejercicio 1" << endl; 
    cout << "2. ejercicio 2" << endl; 
    cout << "3. ejercicio 3" << endl; 
    cout << "4. ejercicio 4" << endl; 
    cout << "5. ejercicio 5" << endl; 
    cout << "6. ejercicio 6" << endl; 
    cout << "7. ejercicio 7" << endl; 
    cout << "8. ejercicio 8" << endl; 
    cout << "Ingrese una opcion: "; 
    cin >> opcion; 
 
    switch (opcion) 
    { 
        case 1: 
        { 
            int aprobados = 0; 
            int reprobados = 0; 
            float nota; 
 
            for (int f = 1; f <= 10; f++) 
            { 
                cout << "Ingrese nota " << f << ": "; 
                cin >> nota; 
 
                if (nota >= 7) 
                { 
                    aprobados++; 
                } 
                else 
                { 
                    reprobados++; 
                } 
            } 
 
            cout << "Aprobados: " << aprobados << endl; 
            cout << "Reprobados: " << reprobados << endl; 
            break; 
        } 
 
        case 2: 
        { 
            int numero; 
            int suma = 0; 
            int maximo, minimo; 
            float promedio; 
 
            cout << "Ingrese el valor 1: "; 
            cin >> numero; 
 
            suma = numero; 
            maximo = numero; 
            minimo = numero; 
 
            for (int i = 2; i <= 10; i++) 
            { 
                cout << "Ingrese el valor " << i << ": "; 
                cin >> numero; 
 
                suma = suma + numero; 
 
                if (numero > maximo) 
                { 
                    maximo = numero; 
                } 
 
                if (numero < minimo) 
                { 
                    minimo = numero; 
                } 
            } 
 
            promedio = suma / 10.0; 
 
            cout << "Suma: " << suma << endl; 
            cout << "Maximo: " << maximo << endl; 
            cout << "Minimo: " << minimo << endl; 
            cout << "Promedio: " << promedio << endl; 
            break; 
        } 
 
        case 3: 
        { 
            float numero; 
 
            cout << "Ingrese un numero: "; 
            cin >> numero; 
 
            while (numero >= 0.01) 
            { 
                numero = numero / 2; 
            } 
 
            cout << "El numero final es: " << numero << endl; 
            break; 
        } 
 
        case 4: 
        { 
            for (int i = 1; i <= 25; i++) 
            { 
                cout << i * 11; 
 
                if (i < 25) 
                { 
                    cout << " - "; 
                } 
            } 
 
            cout << endl; 
            break; 
        } 
        // ... (continúa con los demás cases según el documento)
    } 
    return 0; 
}