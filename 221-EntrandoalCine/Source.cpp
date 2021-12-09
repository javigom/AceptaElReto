/*
* Realizado por Javier Gómez (github.com/javigom) - 10/10/2019
*
* Problema 221 - Entrando al cine (aceptaelreto.com)
*
* MIT License
*/

#include <iostream>

using namespace std;

const int MAX = 10000;
void casoDePrueba() {
	
	int n, a[MAX], numGente = 0;
	bool abrePuerta = true;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] % 2 == 0) {
			numGente++;
		}
	}
	
	for (int i = 1; i < n; i++) {
		if (a[i - 1] % 2 != 0 && a[i] % 2 == 0) {
			abrePuerta = false;
		}
	}

	if (abrePuerta) {
		cout << "SI " << numGente << "\n";
	}
	else {
		cout << "NO\n";
	}
	
	
}

int main() {

	unsigned int numCasos, i;
	cin >> numCasos;

	for (int i = 0; i < numCasos; i++) {
		casoDePrueba();
	}

	return 0;
}