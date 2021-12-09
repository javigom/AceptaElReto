/*
* Realizado por Javier Gómez (github.com/javigom) - 3/10/2019
*
* Problema 242 - Erasmús (aceptaelreto.com)
*
* MIT License
*/

#include <iostream>

using namespace std;

const long long int MAX = 100000;

bool casoDePrueba() {

	long long int numCasos, a[MAX], suma = 0, total = 0;
	cin >> numCasos;

	if (numCasos == 0) {
		return false;
	}

	cin >> a[0];
	suma = suma + a[0];
	for (int i = 1; i < numCasos; i++) {
		cin >> a[i];
		total = total + a[i] * suma;
		suma = suma + a[i];
	}

	cout << total << "\n";
}

int main() {

	while (casoDePrueba()) {

	}

	return 0;
}