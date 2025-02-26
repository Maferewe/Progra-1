// Materia: Programación I, Paralelo 3
// Autor: Maria del Carmen Fernandez
// Fecha creación: 25/02/2025
// Número de ejercicio: 4
// Problema planteado: Simular el lanzamiento de una moneda n veces y determinar el porcentaje de caras y el porcentaje de cruz.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() 
{
    int n, cara = 0, cruz = 0;
    cout << "Ingrese el numero de lanzamientos: ";
    cin >> n;
    srand(time(0)); 

    for (int i = 0; i < n; i++) 
    {
        int resultado = rand() % 2; // 0 = cruz, 1 = cara

        if (resultado == 1) 
        {
            cara++;
        } 
        else 
        {
            cruz++;
        }
    }
    double porcentajecaras = (cara * 100.0) / n;
    double porcentajecruces = (cruz* 100.0) / n;
    cout << "resultados:  ";
    cout << "caras: " << porcentajecaras << "%";
    cout << "cruces: " << porcentajecruces << "%";
    return 0;
}
