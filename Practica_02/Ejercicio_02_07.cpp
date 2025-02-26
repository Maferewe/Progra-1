// Materia: Programación I, Paralelo 3
// Autor: Maria del Carmen Fernandez
// Fecha creación: 25/02/2025
// Número de ejercicio: 7
// Problema planteado: Generar la secuencia
#include <iostream>
using namespace std;
int main() 
{
    int n;
    cout << "ingrese la cantidad de numeros para la piramide: ";
    cin >> n;
    for (int i = n; i >= 1; i--) 
    { 
        for (int j = 1; j <= i; j++) 
        { 
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
