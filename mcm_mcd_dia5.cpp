#include <iostream>
using namespace std;

int calcularMCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int calcularMCM(int a, int b) {
    return (a * b) / calcularMCD(a, b);
}

int main() {
    int num1, num2;
    
    cout << "Ingrese el primer n�mero: ";
    cin >> num1;
    
    cout << "Ingrese el segundo n�mero: ";
    cin >> num2;
    
    cout << "El M�ximo Com�n Divisor (MCD) de " << num1 << " y " << num2 
         << " es: " << calcularMCD(num1, num2) << endl;
    
    cout << "El M�nimo Com�n M�ltiplo (MCM) de " << num1 << " y " << num2 
         << " es: " << calcularMCM(num1, num2) << endl;
    
    return 0;
}
