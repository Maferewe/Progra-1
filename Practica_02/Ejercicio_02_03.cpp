// Materia: Programación I, Paralelo 3
// Autor: Maria del Carmen Fernandez
// Fecha creación: 26/02/2025
// Número de ejercicio: 3
// Problema planteado: Convertir un número en base n a base 10, empleando el Teorema Fundamental de la Numeración: 
// Ej: Convertir 10102 base 10 1 * 23 + 0 * 22 + 1 * 21 + 0 * 20 = 10
#include <iostream>
using namespace std;

int convertir_a_base_10(int numero, int base) {
    int resultado = 0, potencia = 1;

    while (numero > 0) {
        int digito = numero % 10;
        resultado += digito * potencia;
        numero /= 10;
        potencia *= base;
    }

    return resultado;
}

int main() {
    int numero, base;

    cout << "ingrese el numero en base n: ";
    cin >> numero;

    cout << "ingrese la base n: ";
    cin >> base;

    if (base < 2) {
        cout << "la base debe ser al menos 2." << endl;
        return 1;
    }

    int resultado = convertir_a_base_10(numero, base);
    cout << "el numero en base 10 es: " << resultado << endl;

    return 0;
}