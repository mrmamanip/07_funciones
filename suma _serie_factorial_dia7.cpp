#include <iostream>
using namespace std;

long long factorial(int num) {
    long long resultado = 1;
    for(int i = 1; i <= num; i++) {
        resultado = resultado * i;
    }
    return resultado;
}

double calcularSuma(double n) {
    double suma = 0.0;
    for(int i = 1; i <= n; i++) {
        suma = suma + (factorial(i) / (2.0 * i));
    }
    return suma;
}

int main() {
    int n;
    do {
		cout << "Ingrese el valor de n: ";
    	cin >> n;
    
    	if(n < 1) {
    	    cout << "Error: n debe ser un entero positivo." << endl;
    	}
	} while (n < 1);
	
    cout << "El resultado de la suma es: " << calcularSuma(n) << endl;
    
    return 0;
}
