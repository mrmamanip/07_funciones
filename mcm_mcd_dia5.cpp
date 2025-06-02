#include <iostream>
using namespace std;

int valorAbsoluto(int numero) {
    if (numero < 0) {
        return -numero;
    }
    return numero;
}

int calcularMCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return valorAbsoluto(a);
}

int calcularMCM(int a, int b) {
    return valorAbsoluto((a * b) / calcularMCD(a, b));
}

int main() {
    int num1, num2;
    
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    
    cout << "El Maximo Comun Divisor (MCD) de " << num1 << " y " << num2 
         << " es: " << calcularMCD(num1, num2) << endl;
    
    cout << "El Mínimo Común Multiplo (MCM) de " << num1 << " y " << num2 
         << " es: " << calcularMCM(num1, num2) << endl;
    
    return 0;
}
