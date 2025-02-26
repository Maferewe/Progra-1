// Materia: Programación I, Paralelo 3
// Autor: Maria del Carmen Fernandez
// Fecha creación: 26/02/2025
// Número de ejercicio: 10
// Problema planteado: 10. Genere N número aleatorios entre 1 y 10000, muéstrelos en pantalla y cuente cuantos números son primos.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//para verificar si un número es primo
bool esPrimo(int num) 
{
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) 
    {
        if (num % i == 0) return false;
    }
    return true;
}
int main() 
{
    int N, num, contadorPrimos = 0;
    cout << "ingrese la cantidad de numeros a generar: ";
    cin >> N;
    srand(time(0));
    cout << "numeros generados: " << endl;
    for (int i = 0; i < N; i++)
    {
        num = rand() % 10000 + 1;
        cout << num << " ";
        if (esPrimo(num))
        {
            contadorPrimos++; //contar numeros primos
        }
    }
    cout << "\ncantidad de numeros primos: " << contadorPrimos << endl;
    return 0;
}