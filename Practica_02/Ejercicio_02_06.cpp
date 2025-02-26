// Materia: Programación I, Paralelo 3
// Autor: Maria del Carmen Fernandez
// Fecha creación: 25/02/2025
// Número de ejercicio: 6
// Problema planteado:Escribir un algoritmo que permita adivinar un número que se genere internamente al azar, 
//el cual está en el rango de 0 a 50. El usuario debe adivinar este número en base a aproximaciones para lo cual se dispone de 5 intentos.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(0));
    int numerosec = rand() % 51; 
    int intento, num;
    cout << "estoy pensando en un numero de 0 a 50" << endl;
    for (int i = 1; i <= 5; i++) 
    {
        cout << "Intento " << i << ": ";
        cin >> num;
        if (num == numerosec) 
        {
            cout << "¡Adivinaste el numero!" << endl;
            return 0; //el programa termina ahi
        } 
        else 
        {
            if (num < numerosec) 
            {
                cout << "El numero esta entre " << num << " y 50." << endl;
            } 
            else 
            {
                cout << "El numero esta entre 0 y " << num << "." << endl;
            }
        }
    }
    cout << "Se acabaron tus intentos, el numero era: " << numerosec << endl;
    return 0;
}