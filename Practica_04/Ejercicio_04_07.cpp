// Materia: Programación I, Paralelo 3
// Autor: Maria del Carmen Fernandez
// Fecha creación: 11/03/2025
// Número de ejercicio: 7
// Problema planteado: Sean los datos m y n enteros positivos. Elabore un diagrama de flujo para calcular el 
//Máximo Común Divisor y el Mínimo Común Múltiplo de m y n. . El Algoritmo de Euclides establece que, si m>=n, MCD(m,n) = MCD(n, m mod n).
#include <iostream>
using namespace std;

void swap(int&, int&);
int mcd (int, int);
int mcm (int, int);
int main () 
{
    int n1, n2;
    cout << "Ingrese 2 numeros: " << endl;
    cin >> n1 >> n2;
    if(n2 > n1)
        swap(n1, n2);
    cout << "El mcd es: " << mcd(n1, n2) << endl;
    cout << "El mcm es: " << mcm(n1, n2) << endl;
    return 0;
}
void swap (int &a, int &b) 
{
    a = a + b;
    b = a - b;
    a = a - b;
}

int mcd (int m, int n) {
    int res = 1;
    do {
        res = m % n;
        if(!res == 0) {
            m = n;
            n = res;
        }
    }while(res != 0);

    return n;
}

int mcm (int m, int n){
    int aux = m, i = 1;
    while(aux % n != 0) {
        aux = m * i;
        i++;
    }

    return aux;
}