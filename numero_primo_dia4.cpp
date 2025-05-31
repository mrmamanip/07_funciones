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
	cout << "Ingrese un numero para corroborar si es primo: ";
	cin >> num;
	if (EsPrimo(num)) {
		cout << num << " si es primo." << endl;
	} else {
		cout << num << " no es primo." << endl;
	}
	return 0;
}
