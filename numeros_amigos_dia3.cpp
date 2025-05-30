#include <iostream>
using namespace std;

int sumaDivisoresPropios(int n) {
    if (n == 1) return 0;
    
    int suma = 1;
    
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            suma += i;            
        }
    }
    return suma;
}

int sonAmigos(int a, int b) {
    if ((sumaDivisoresPropios(a) == b) && (sumaDivisoresPropios(b) == a)) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num1, num2;
    
    cout << "Ingrese dos numeros enteros positivos: ";
    cin >> num1 >> num2;
    
    if (sonAmigos(num1, num2)) {
        cout << num1 << " y " << num2 << " son numeros amigos." << endl;
    } else {
        cout << num1 << " y " << num2 << " no son numeros amigos." << endl;
    }
    
    return 0;
}
