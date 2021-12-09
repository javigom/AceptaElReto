/*
* Realizado por Javier Gómez (github.com/javigom) - 10/11/2019
*
* Problema 158 - Los saltos de Mario (aceptaelreto.com)
*
* MIT License
*/

#include <iostream>

using namespace std;

void casoDePrueba() {
	int num, actual, siguiente, arriba = 0, abajo = 0;
	cin >> num;
	cin >> actual;
	for (int i = 0; i < num - 1; i++) {
		cin >> siguiente;
		if (actual < siguiente) {
			arriba++;
		}
		else if (actual > siguiente) {
			abajo++;
		}
		actual = siguiente;
	}
	cout << arriba << " " << abajo << endl;
}

int main() {

	unsigned int numCasos, i;
	cin >> numCasos;

	for (int i = 0; i < numCasos; i++) {
		casoDePrueba();
	}

	return 0;
}