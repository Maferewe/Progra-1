// Materia: Programación I, Paralelo 3
// Autor: Maria del Carmen Fernandez
// Fecha creación: 10/03/2025
// Número de ejercicio: 2
// Problema planteado:Crea una función llamada calcularVolumen que reciba un parámetro radio y un parámetro altura. 
//El parámetro altura debe tener un valor por defecto de 10. Calcula y devuelve el volumen de un cilindro (usando la fórmula: V=π×r2×hV)
#include <iostream>
using namespace std;
double calcularVolumen(double radio, double altura = 10) 
{
    double pi = 3.1416;
    return pi * radio * radio * altura;
}
int main() 
{
    double radio, altura;
    char opcion;

    cout << "Ingrese el radio del cilindro: ";
    cin >> radio;
    cout << "¿Desea ingresar la altura? (s/n): ";
    cin >> opcion;

    if (opcion == 's' || opcion == 'S') 
    {
        cout << "Ingrese la altura del cilindro: ";
        cin >> altura;
        cout << "El volumen del cilindro es: " << calcularVolumen(radio, altura) << endl;
    } 
    else 
    {
        cout << "El volumen del cilindro con altura por defecto (10) es: " << calcularVolumen(radio) << endl;
    }

    return 0;
}