#include <iostream>
using namespace std;
void generarFibonacci(int n) {
    int a, b, c, suma;
	a = 0;
	b = 1;
	suma = 0;
    cout << "Serie de Fibonacci con " << n << " términos:" << endl;
    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            c = i;
        } else {
            c = a + b;
            a = b;
            b = c;
        }
        cout << c << " ";
        suma += c;
    }
    cout << endl << "La suma de los terminos es: " << suma << endl;
}
int main() {
    int terminos;
    cout << "Ingrese la cantidad de términos de Fibonacci que desea generar: ";
    cin >> terminos;
    if (terminos <= 0) {
        cout << "Por favor ingrese un número positivo." << endl;
    } else {
        generarFibonacci(terminos);
    }
    return 0;
}
