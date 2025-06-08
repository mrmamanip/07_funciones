#include <iostream>
using namespace std;

int valorAbsoluto(int numero);
int calcularMCD(int a, int b);
int calcularMCM(int a, int b);

int main() {
    int num1, num2;
    char option;
	do {
		cout << "Ingrese el primer numero: ";
    	cin >> num1;
    
    	cout << "Ingrese el segundo numero: ";
    	cin >> num2;
    
    	cout << "El Maximo Comun Divisor (MCD) de " << num1 << " y " << num2 
    	     << " es: " << calcularMCD(num1, num2) << endl;
    
    	cout << "El M�nimo Com�n Multiplo (MCM) de " << num1 << " y " << num2 
    	     << " es: " << calcularMCM(num1, num2) << endl;
    	     
		cout << "Desea volver a hallar el MCD y MCM de dos numeros? (s/n): ";
    	 
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


