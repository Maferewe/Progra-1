// Materia: Programación I, Paralelo 3
// Autor: Maria del Carmen Fernandez
// Fecha creación: 10/03/2025
// Número de ejercicio: 4
// Problema planteado: Crea dos funciones:
//Una función llamada convertirCelsiusAFahrenheit que reciba grados Celsius y devuelva la conversión a Fahrenheit.
//Una función llamada mayorTemperatura que reciba dos valores de temperatura y devuelva el valor mayor.
#include <iostream>
using namespace std;
double convertirCelsiusAFahrenheit(double celsius) 
{
    return (celsius * 9 / 5) + 32;
}
double mayorTemperatura(double temp1, double temp2) 
{
    if (temp1 > temp2) 
    {
        return temp1;
    } 
    else 
    {
        return temp2;
    }
}

int main() {
    double celsius, temp1, temp2;

    cout << "Ingrese la temperatura en grados Celsius: ";
    cin >> celsius;
    cout << "La temperatura en Fahrenheit es: " << convertirCelsiusAFahrenheit(celsius) << endl;

    cout << "Ingrese la primera temperatura: ";
    cin >> temp1;
    cout << "Ingrese la segunda temperatura: ";
    cin >> temp2;

    cout << "La mayor temperatura es: " << mayorTemperatura(temp1, temp2) << endl;

    return 0;
}