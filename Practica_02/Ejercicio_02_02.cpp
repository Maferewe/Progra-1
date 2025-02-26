// Materia: Programación I, Paralelo 3
// Autor: Maria del Carmen Fernandez
// Fecha creación: 25/02/2025
// Número de ejercicio: 2
// Problema planteado: Simular el lanzamiento de un dado n veces y determinar la frecuencia de repetición de las caras pares.
#include <iostream>
#include <cstdlib>//esta libreria nos ayuda con los numeros aleatorios
#include <ctime>
using namespace std;
int main() 
{
    int n, dado, pares = 0;

    cout << "ingrese el numero de lanzamientos: ";
    cin >> n;

    srand(time(0)); // semilla para los numeros aleatorios

    for (int i = 0; i < n; i++) 
    {
        dado = rand() % 6 + 1; // genera un numero entre 1 y 6
        cout << "lanzamiento " << i + 1 << ": " << dado << endl;

        if (dado % 2 == 0) 
        {
            pares++;
        }
    }

    cout << "Frecuencia de caras pares: " << pares << endl;

    return 0;
}

