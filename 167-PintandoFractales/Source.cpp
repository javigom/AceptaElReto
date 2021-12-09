/*
* Realizado por Javier Gómez (github.com/javigom) - 7/11/2019
*
* Problema 167 - Pintando fractales (aceptaelreto.com)
*
* MIT License
*/

#include <iostream>

using namespace std;

int sumaTinta(int n) {
	int lado = n, suma = 0;

	if (lado == 1) {
		suma = suma + 4 * lado;
	}

	else {
		suma = suma + 4 * lado;
		lado = lado / 2;
		suma = suma + 4 * sumaTinta(lado);
	}

	return suma;
}

int main() {

	int num;
	cin >> num;
	while (cin) {
		cout << sumaTinta(num) << endl;
		cin >> num;
	}

	return 0;
}