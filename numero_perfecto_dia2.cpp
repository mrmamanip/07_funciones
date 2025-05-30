#include<iostream>
using namespace std;

int SumaDeDivisores(int n) {
	int sumdiv = 0;
	
	for (int i = 1; i < n ; i++ ) {
		if (n % i == 0) {
			sumdiv = sumdiv + i;
		}
	}
	
	if (sumdiv == n) {
        return 1;
    } else {
        return 0;
    }
}

int main(){
	
	int num;

	cout << "Ingrese el numero que se desea corroborar si es perfecto: ";
	cin >> num;

	if ( num < 0 ) {
		cout<<"Un numero perfecto no puede ser negativo.";
		return 0;
	} else if ( num == 0 ) {
		cout << "0 no es un numero perfecto.";
		return 0;
	}
	
	if (SumaDeDivisores(num)) {
        cout << num << " es un numero perfecto.";
    } else {
        cout << num << " no es un numero perfecto.";
    }
    
	return 0;
}
