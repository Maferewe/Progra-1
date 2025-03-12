// Materia: Programación I, Paralelo 3
// Autor: Maria del Carmen Fernandez
// Fecha creación: 10/03/2025
// Número de ejercicio: 1
// Problema planteado: Crea una función llamada intercambiarValores que reciba dos parámetros por 
//referencia y los intercambie entre sí. Imprime los valores antes y después de la llamada a la función.
#include <iostream>
using namespace std;

void intercambiarValores(int&, int&);

int main () 
{
    int n1, n2;
    cout << "ingrese 2 numeros: " << endl;
    cin >> n1 >> n2;
    cout << "Sin intercambiar sus valores: " << n1 << "  " << n2 << endl;
    intercambiarValores(n1, n2);
    cout << "Intercambiando sus valores: " << n1 << "  " << n2 << endl;
    return 0;
}

void intercambiarValores(int &num1, int &num2)
{
    int aux = num1;
    num1 = num2;
    num2 = aux;
}