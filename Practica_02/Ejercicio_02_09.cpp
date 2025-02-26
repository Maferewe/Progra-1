// Materia: Programación I, Paralelo 3
// Autor: Maria del Carmen Fernandez
// Fecha creación: 25/02/2025
// Número de ejercicio: 9
// Problema planteado: Genere N números aleatorios entre 1 y 1000 y realice los siguientes cálculos:
//a. Sumatoria de todos los números
//b. Promedio
//c. Mayor valor generado
//d. Menor valor generado
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() 
{
    int N, num, suma = 0, mayor = 0, menor = 1001;
    cout << "ingrese la cantidad de numeros a generar: ";
    cin >> N;
    srand(time(0));
    for (int i = 0; i < N; i++) 
    {
        num = rand() % 1000 + 1;
        cout << "numero generado: " << num << endl;
        suma += num;
        if (num > mayor) mayor = num; //encontrar el mayor
        if (num < menor) menor = num; //encontrar el menor
    }
    double promedio = static_cast<double>(suma) / N;
    cout << "Sumatoria de los numeros: " << suma << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Mayor valor generado: " << mayor << endl;
    cout << "Menor valor generado: " << menor << endl;
    return 0;
}