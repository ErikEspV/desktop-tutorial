// Calculator guia.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <iostream>
using namespace std;
int a, b, suma, resta, multiplica;
double divide;
void pedirDatos()
{
    cout << "ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;
}

void sumar() {
    suma = a + b;
}
void restar() {
    resta = a - b;
}
void multiplicar() {
    multiplica = a * b;
}
void dividir() {
    double c = a;
    double d = b;
    divide = c / d;
}

void mostrarResultado() {
    cout << "La suman es: " << suma << endl;
    cout << "La resta es: " << resta << endl;
    cout << "La multiplicacion es: " << multiplica << endl;
    cout << "La division es: " << divide << endl;

}
int main() {
    pedirDatos();
    sumar();
    restar();
    multiplicar();
    dividir();
    mostrarResultado();
    system("pause");
    return 0;
}
