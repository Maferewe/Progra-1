// Materia: Programación I, Paralelo 3
// Autor: Maria del Carmen Fernandez
// Fecha creación: 25/02/2025
// Número de ejercicio: 5
// Problema planteado:Genera un número aleatorio entre 1 y 10 y calcula su factorial
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int factorial(int num) 
{
    int resultado = 1;
    for (int i = 1; i<= num; i++) 
    {
        resultado *= i;
    }
    return resultado;
}

int main() 
{
    srand(time(0)); 
    int numero = rand() % 10 + 1; //generar un numero entre 1 y 10
    cout << "numero generado: " << numero << endl;
    cout << "factorial: " << factorial(numero) << endl;
    return 0;
}