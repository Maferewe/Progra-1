// Materia: Programación I, Paralelo 3
// Autor: Maria del Carmen Fernandez
// Fecha creación: 25/02/2025
// Número de ejercicio: 1
// Problema planteado: Obtener la suma de la serie: 4 + 6 + 9 + 13 + 19 + 28 + 42 +……. Para n términos
#include <iostream>
using namespace std;
int main () 
{
    int n;
    cout << "Serie para obtener 4 + 6 + 9 + 13 + 19 + 28 + 42 +…… ";
    cout << "ingrese el numero de terminos:  "<<endl;
    cin >> n;

    int suma = 0;
    int termino_anterior = 3;
    suma = suma + termino_anterior;
    if (n >= 1) 
    {
        suma = 4;
    }

    for (int i = 1; i<= n; ++i) 
    {
        int termino_nuevo = termino_anterior*3/2 ; //se debe multiplicar el termino anterior por 3/2
        cout << termino_nuevo << " + ";
        suma += termino_nuevo;
        termino_anterior = termino_nuevo;
    }
    cout << "la suma de los " << n << " terminos es: " << suma << endl;
    return 0;
}