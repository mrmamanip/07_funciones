#include<iostream>
using namespace std;

int SumaDeDivisores(int n) {
	int sumdiv = 0;
	
	for (int i = 1; i < n ; i++ ) {
		if (n % i == 0) {
			sumdiv = sumdiv + i;
		}
	}
	
	if ( sumdiv == n ) {
        return 1;
    } else {
        return 0;
    }
}

int main(){
	
	int num;
	char option;
	do {
		cout << "Ingrese el numero que se desea corroborar si es perfecto: ";
		cin >> num;
	
		if ( num < 0 ) {
			cout<<"Un numero perfecto no puede ser negativo.";
		} else if ( num == 0 ) {
			cout << "0 no es un numero perfecto.";
		} else {
	
			if (SumaDeDivisores(num)) {
        		cout << num << " es un numero perfecto." << endl;
    		} else {
    		    cout << num << " no es un numero perfecto." << endl;
    		}
    	}
    	
    	cout << "Desea volver a corroborar si dos numeros son amigos? (s/n): ";
    	 
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

