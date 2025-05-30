#include<iostream>
using namespace std;

int EsPrimo(int n){
	for (int i = 2 ; i < n ; i++) {
		if ( n % i  == 0 ) {
			return 0;
		}
	}
	return 1;
}

int main() {
	int num;
	char option;
	do {
		cout << "Ingrese un numero para corroborar si es primo: ";
		do {
			cin >> num;
			if ( num <= 1 ) {
				cout << "Ingrse SOLO un numero MAYOR que 1: ";
			}
		} while ( num <= 1 );
	
		if (EsPrimo(num)) {
			cout << num << " si es primo." << endl;
		} else {
			cout << num << " no es primo." << endl;
		}
		
		cout << "Desea volver a corroborar si es un numero primo? (s/n): ";
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
