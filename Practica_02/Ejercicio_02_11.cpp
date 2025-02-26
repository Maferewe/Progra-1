// Materia: Programación I, Paralelo 3
// Autor: Maria del Carmen Fernandez
// Fecha creación: 26/02/2025
// Número de ejercicio: 11
// Problema planteado:
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() 
{
    int N, nin1, nin2, nin3, pan;
    cout << "ingrese la cantidad total de ninos en la guarderia: ";
    cin >> N;
    srand(time(0));
    nin1 = rand() % (N + 1);
    nin2 = rand() % (N - nin1 + 1);
    nin3 = N - nin1 - nin2;
    pan= (nin1* 6) + (nin2* 3) + (nin3* 2);
   
    cout << "\nDistribucion de ninos:\n";
    cout << "Ninos de 1 anio: " << nin1 << endl;
    cout << "Ninos de 2 anios: " << nin2 << endl;
    cout << "Ninos de 3 anios: " << nin3 << endl;
    cout << "\nConsumo total de panales por dia: " << pan<< " PANALES\n";
    return 0;
}