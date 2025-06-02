#include <iostream>
using namespace std;

void divisionPorRestas(int num1, int num2, int &cociente, int &resto) {
    int mayor, menor;
    if (num1 > num2) {
        mayor = num1;
        menor = num2;
    } else {
        mayor = num2;
        menor = num1;
    }
    
    cociente = 0;
    resto = mayor;
    
    while (resto >= menor) {
        resto = resto - menor;
        cociente++;
    }
}

int main() {
    int num1, num2, cociente, resto;
    
    do {
		cout << "Ingrese el primer numero entero positivo: ";
    	cin >> num1;
    
    	cout << "Ingrese el segundo numero entero positivo: ";
    	cin >> num2;
    
    	if (num1 <= 0 || num2 <= 0) {
        	cout << "Error: ambos numeros deben ser positivos." << endl;
    	}
    } while (num1 <= 0 || num2 <= 0);
    
    divisionPorRestas(num1, num2, cociente, resto);
    
    cout << "Cociente: " << cociente << endl;
    cout << "Resto: " << resto << endl;
    
    return 0;
}
