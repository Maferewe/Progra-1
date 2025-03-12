// Materia: Programación I, Paralelo 3
// Autor: Maria del Carmen Fernandez
// Fecha creación: 10/03/2025
// Número de ejercicio: 5
// Problema planteado:Realizar un programa que reciba las horas trabajadas de un trabajador, la tarifa por hora y una bonificación si trabaja mas de 8 horas , solamente a las horas extra.
//Debe dar como resultado.
//• Salario del trabajador
//• Salario bonificación si es que tuviera.
#include <iostream>

using namespace std;

double salario(int, double, double&);
double bonificacion (int, double);

int main () {
    int horas;
    double sal, bono;
    cout << "ingrese la cantidad de horas trabajadas: " << endl;
    cin >> horas;
    cout << "Ingrese el sueldo por hora: " << endl;
    cin >> sal;
    cout << "Ingrese la bonificacion por horas extra: " << endl;
    cin >> bono;

    double sueldo = salario(horas, sal, bono);
    cout << "El salario es de: " << sueldo << endl;
    cout << "Por horas extra tiene una bonificacion de: " << bono << endl;
    cout << "El sueldo total es: " << sueldo + bono << endl;
}

double salario(int horas, double sueldo, double &bono){
    if(horas > 8){
        bono = bonificacion(horas - 8, bono);
        return 8 * sueldo;
    } else {
        bono = 0;
        return horas * sueldo;
    }
}

double bonificacion (int horas, double bono){
    return horas * bono;
}