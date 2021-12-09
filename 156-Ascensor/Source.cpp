/*
* Realizado por Javier Gómez (github.com/javigom) - 23/10/2019
*
* Problema 156 - Ascensor (aceptaelreto.com)
*
* MIT License
*/

#include <iostream>

using namespace std;

bool casoDePrueba() {

	int actual, siguiente, suma = 0;
	cin >> actual;

	if (actual < 0) {
		return false;
	}
	else {
		cin >> siguiente;

		do {
			suma = suma + abs(siguiente - actual);
			actual = siguiente;
			cin >> siguiente;
		} while (siguiente >= 0);
		
		
		cout << suma << endl;
		return true;
	}
}

int main() {

	while (casoDePrueba()) {

	}

	return 0;
}