/*
* Realizado por Javier Gómez (github.com/javigom) - 6/11/2019
*
* Problema 140 - Suma de dígitos (aceptaelreto.com)
*
* MIT License
*/

#include <iostream>

using namespace std;

int funRec(long long int n) {
	int suma;
	int digito = n % 10;
	if (n < 10) {
		suma = n;
		cout << digito;
	}

	else {
		suma = digito + funRec(n / 10);
		cout << " + " << digito;
	}

	return suma;
}

int main() {

	long long int num;
	cin >> num;

	while (num >= 0) {
		cout << " = " << funRec(num) << endl;
		cin >> num;
	}

	return 0;
}