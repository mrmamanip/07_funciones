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
    char option;
    do {
		do {
			cout << "Ingrese el valor de n: ";
    		cin >> n;
    
    		if(n < 1) {
    		    cout << "Error: n debe ser un entero positivo." << endl;
    		}
		} while (n < 1);
	
    	cout << "El resultado de la suma es: " << calcularSuma(n) << endl;
    	
    	cout << "Desea volver a calcular la suma de n terminos de la serie? (s/n): ";
    	
    	do {
    		cin >> option;
    		
    		if (option != 's' && option != 'S' && option != 'n' && option != 'N'){
    			cout << "Ingrese SOLO letras (s/n): ";
			}
		} while (option != 's' && option != 'S' && option != 'n' && option != 'N');    	
    } while ( option == 's' || option == 'S' );
    
    cout << "Programa finalizado.";
    return 0;
}
