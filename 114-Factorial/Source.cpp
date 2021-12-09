/*
 * Realizado por Javier Gómez (github.com/javigom) - 26/9/2019
 *
 * Problema 114 - Último dígito del factorial (aceptaelreto.com)
 *
 * GNU General Public License v3
 */

#include <iostream>

	using namespace std;

	void casoDePrueba(int n) {
	
		int factorial;
		switch (n){
		case 0: factorial = 1; break;
		case 1: factorial = 1; break;
		case 2: factorial = 2; break;
		case 3: factorial = 6; break;
		case 4: factorial = 4; break;
		default: factorial = 0; break;
		}
	

		cout << factorial << "\n";
	}

	int main() {
		unsigned int numCasos, i, n;
		cin >> numCasos;

		for (int i = 0; i < numCasos; i++) {
			cin >> n;
			casoDePrueba(n);
		}
	}
