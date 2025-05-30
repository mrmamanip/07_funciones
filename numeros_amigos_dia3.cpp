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
    char option;
    do {
    	cout << "Ingrese dos numeros enteros positivos:" << endl;
    	cout << "Ingrese el primer numero: ";
    	cin >> num1;
		cout << "Ingrese el segundo numero: "; 
		cin >> num2;
    
    	if ( num1 < 0 || num2 < 0 ) {
    		cout << "Ningun numero debe ser negativo." << endl;

		} else if ( num1 == 0 || num2 == 0 ) {
			cout << "Ningun numero debe ser 0." << endl;

		} else {
			
			if (sonAmigos(num1, num2)) {
    		    cout << num1 << " y " << num2 << " son numeros amigos." << endl;
    		} else {
    	    cout << num1 << " y " << num2 << " no son numeros amigos." << endl;
    		}
		}
    	
    	cout << "Desea volver a corroborar si dos numeros son amigos? (s/n):" << endl;
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
