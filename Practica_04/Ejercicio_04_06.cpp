// Materia: Programación I, Paralelo 3
// Autor: Maria del Carmen Fernandez
// Fecha creación: 11/03/2025
// Número de ejercicio: 6
// Problema planteado: Leer un número entero y determinar si las sumas 
//de sus dígitos distintos de cero forman un número primo; de ser así, imprimir el mensaje respectivo.
#include <iostream>
using namespace std;

int sumaDigitos(int);
bool esPrimo(int);

int main () {
    int num;
    cout << "Ingrese un numero: " << endl;
    cin >> num;
    int sum = sumaDigitos (num);
    cout << "La suma de los digitos es: " << sum << endl;

    if(esPrimo(sum)){
        cout << "La suma de los digitos es un numero primo" << endl;
    } else {
        cout << "La suma de los digitos no es un numero primo" << endl;
    }
}

int sumaDigitos (int num) {
    int sum = 0;
    while(num > 0){
        sum += num % 10;
        num /= 10;
    }

    return sum;
}

bool esPrimo (int n) {
    if(n <= 1) return false;

    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) return false;
    }

    return true;
}