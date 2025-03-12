// Materia: Programación I, Paralelo 3
// Autor: Maria del Carmen Fernandez
// Fecha creación: 11/03/2025
// Número de ejercicio: 9
// Problema planteado: Un negocio de 'Cosméticos' de belleza contratará a n vendedoras para la venta de sus productos. 
//Cada vendedora en promedio debe vender 10 productos en un mes. La cancelación de los sueldos a las vendedoras se realiza cada 
//fin de mes bajo las siguientes características:
//-Una vendedora recibe un sueldo básico de acuerdo a su antigüedad y además se añade un sueldo extra por comisión de 
//ventas del 10% del total vendido.
//-La propietaria del negocio desea conocer cuánto de sueldo debe cancelar a cada una de sus vendedoras y cuánto de
// comisión recibirá como extra.
#include <iostream>
using namespace std;
void calcularSueldo(double sueldoBase, double totalVendido, double &comision, double &sueldoTotal) // Función para calcular el sueldo total y la comisión de una vendedora
{
    comision = totalVendido * 0.10;
    sueldoTotal = sueldoBase + comision; 
}
int main() 
{
    int n;
    cout << "Ingrese el numero de vendedoras: ";
    cin >> n;
    double sueldoBase, totalVendido, comision, sueldoTotal;

    for (int i = 1; i <= n; i++) {
        cout << "\nVendedora #" << i << endl;
        cout << "Ingrese el sueldo base: ";
        cin >> sueldoBase;
        cout << "Ingrese el total vendido por la vendedora: ";
        cin >> totalVendido;
        calcularSueldo(sueldoBase, totalVendido, comision, sueldoTotal);
        cout << "Comision de la vendedora: " << comision << endl;
        cout << "Sueldo total a pagar: " << sueldoTotal << endl;
    }
    return 0;
}