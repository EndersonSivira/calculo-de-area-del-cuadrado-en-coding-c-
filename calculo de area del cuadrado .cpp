#include <iostream>
using namespace std;

int main() {
    double lado;
    double area;

    cout << "Ingrese la longitud de un lado del cuadrado: ";
    cin >> lado;

    area = lado * lado;

    cout << "El área del cuadrado es: " << area << endl;

    return 0;
}