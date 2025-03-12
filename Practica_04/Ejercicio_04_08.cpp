// Materia: Programación I, Paralelo 3
// Autor: Maria del Carmen Fernandez
// Fecha creación: 11/03/2025
// Número de ejercicio: 8
// Problema planteado: La comercial 'La Estrella' vende n productos en un día, de los cuales factura al precio 
//de cada uno con un IVA del 13%, y si el monto final se excede en 2500 Bs se aplica un descuento del 5%. 
//Obtener la suma total de las ventas realizadas en el día y calcular el pago del IVA del 13% al servicio de Impuestos Nacionales.
//El precio de los productos debe ser generado en forma aleatoria entre 20 y 50.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

double calcularDescuento(double&);
void obtenerSuma(double&, double);
double calcularIVA (double);

int main () {
    int n;
    cout << "Ingrese la cantidad de ventas: " << endl;
    cin >> n;
    srand(time(NULL));
    double total = 0.0;
    for(int i = 1; i <= n; i++){
        int precio = rand() % (31) + 20;
        cout << "Ingrese la cantidad del producto " << i << ":\n";
        int cant;
        cin >> cant;

        double monto = cant * precio;
        cout << "Precio: " << monto << endl;
        double descuento = calcularDescuento(monto);
        cout << "Descuento: " << descuento << endl;
        cout << "El precio total es: " << monto << endl;
        obtenerSuma(total, monto);
    }

    cout << "===================\n";
    cout << "Total de ganancias: " << total << endl;
    double iva = calcularIVA(total);
    cout << "Impuesto IVA: " << iva << endl;
    cout << "Ganancias descontando impuestos: " << total - iva << endl;
    return 0;
}

double calcularDescuento(double &monto){
    if(monto > 2500.0) {
        double descuento = monto * 0.05;
        monto = monto - descuento;
        return descuento;
    } else {
        return 0.0;
    }
}

void obtenerSuma(double &total, double monto) {
    total += monto;
}

double calcularIVA (double total) {
    return total * 0.13;
}