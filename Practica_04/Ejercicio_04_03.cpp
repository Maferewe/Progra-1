// Materia: Programación I, Paralelo 3
// Autor: Maria del Carmen Fernandez
// Fecha creación: 10/03/2025
// Número de ejercicio: 3
// Problema planteado: Crea una función llamada modificarValores que reciba dos parámetros: un entero por valor y un entero por 
//referencia. La función debe multiplicar el valor por 2 (para el valor pasado por valor) y cambiar el valor por referencia (sumando 10).
#include <iostream>
using namespace std;
void modificarValores(int valorPorValor, int &valorPorReferencia) {
    valorPorValor = valorPorValor * 2;
    valorPorReferencia = valorPorReferencia + 10; 
}
int main() {
    int num1, num2;
    
    cout << "Ingrese un numero (pasado por valor): ";
    cin >> num1;

    cout << "Ingrese otro numero (pasado por referencia): ";
    cin >> num2;
    
    modificarValores(num1, num2);
    cout << "Despues de la funcion:" << endl;
    cout << "Valor pasado por valor (no cambia fuera): " << num1 << endl;
    cout << "Valor pasado por referencia (modificado): " << num2 << endl;

    return 0;
}
