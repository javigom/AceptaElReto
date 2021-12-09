/*
* Realizado por Javier Gómez (github.com/javigom) - 1/10/2019
*
* Problema 171 - Abadías Pirenáicas (aceptaelreto.com)
*
* MIT License
*/

#include <iostream>

using namespace std;

const int MAX = 100000;

bool casoDePrueba() {
	int n, numAbadias = 0, maxAltura = 0, array[MAX];
	cin >> n;

	if (n == 0) {
		return false;
	}

	for (int i = 0; i < n; i++) {
		cin >> array[i];
	}

	for (int i = n - 1; i >= 0; i--) {
		if (array[i] > maxAltura) {
			maxAltura = array[i];
			numAbadias++;
		}
	}

	cout << numAbadias << "\n";
}

int main() {
	
	while (casoDePrueba()) {

	}

	return 0;
}