// Materia: Programación I, Paralelo 3
// Autor: Maria del Carmen Fernandez
// Fecha creación: 26/02/2025
// Número de ejercicio: 8
// Problema planteado:
#include <iostream>
using namespace std;
int main() 
{
    int n;
    cout << "ingrese la cantidad de filas: "<<endl;
    cin >> n;
    for (int i = 1; i <= n; i++) 
    {  
        for (int j = 1; j <= i; j++) 
        {
            cout << j;
        }
        for (int j = i - 1; j >= 1; j--) 
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}
