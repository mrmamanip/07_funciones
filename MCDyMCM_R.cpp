#include <iostream>
using namespace std;

void MCDyMCM(int a, int b, int &mcd, int &mcm);
int ValorAbsoluto(int num);

int main (){
	int x, y;
	int rMCD, rMCM;
	cout << "Ingrese dos numeros para hallar su MCD y MCM:" << endl;
	cout << "Primer numero: ";
	cin >> x;
	cout << "Segundo numero: ";
	cin >> y;
	x = ValorAbsoluto(x);
	y = ValorAbsoluto(y);
	MCDyMCM(x, y, rMCD, rMCM);
	cout<<"MCD: "<<rMCD<<endl;
	cout<<"MCM: "<<rMCM<<endl;
	return 0;
}

int ValorAbsoluto(int num){
    if (num < 0) {
        return (num * -1);
    }
    return num;
}

void MCDyMCM(int a, int b, int &mcd, int &mcm){
	int i;
	i = 1;
	mcd = 1;
	while (i<=a && i<=b){
		if (a % i == 0 && b % i == 0){
			mcd = i;
		}
		i = i + 1;
	}
	mcm = (a*b)/mcd;
}
