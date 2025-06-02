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
    
    cout << "Ingrese el primer número: ";
    cin >> num1;
    
    cout << "Ingrese el segundo número: ";
    cin >> num2;
    
    cout << "El Máximo Común Divisor (MCD) de " << num1 << " y " << num2 
         << " es: " << calcularMCD(num1, num2) << endl;
    
    cout << "El Mínimo Común Múltiplo (MCM) de " << num1 << " y " << num2 
         << " es: " << calcularMCM(num1, num2) << endl;
    
    return 0;
}
