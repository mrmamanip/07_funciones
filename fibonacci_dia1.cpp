#include <iostream>
using namespace std;

void generarFibonacci(int n) {
    int a = 0, b = 1, c, suma = 0;
    
    cout << "Serie de Fibonacci con " << n << " terminos:" << endl;
    
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
    cout << "\nLa suma de los terminos es: " << suma << endl;
}

int main() {
	char option;
	
	do {
		int terminos;
		
		cout << "Ingrese la cantidad de terminos de Fibonacci que desea generar: ";
   		cin >> terminos;
    
    	if (terminos <= 0) {
        	cout << "Por favor ingrese un numero positivo." << endl;
    	} else {
        	generarFibonacci(terminos);
    	}
    	
    	cout << "Desea generar otra serie y suma? (s/n): ";
    	cin >> option;
	} while (option == 's' || option == 'S');
	
	cout<<"Programa finalizado.";
    
    return 0;
}
