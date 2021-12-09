/*
* Realizado por Javier Gómez (github.com/javigom) - 3/10/2019
*
* Problema 314 - Temperaturas extremas (aceptaelreto.com)
*
* MIT License
*/

#include <iostream>

using namespace std;

const int MAX = 10000;
void casoDePrueba() {
	int numPicos = 0, numValles = 0, numElem = 0;
	int anterior, actual, siguiente;

	cin >> numElem;

	if(numElem >= 3){
		cin >> anterior;
		cin >> actual;
		
		for (int i = 1; i < numElem - 1; i++) {
			cin >> siguiente;

			if (actual < anterior && actual < siguiente) {
				numValles++;
			}
			else if (actual > anterior && actual > siguiente) {
				numPicos++;
			}
			anterior = actual;
			actual = siguiente;

		}
	}
	else {
		for (int i = 0; i < numElem; i++) {
			cin >> anterior;
		}
	}
	
	cout << numPicos << " " << numValles << endl;
}

int main() {

	unsigned int numCasos, i;
	cin >> numCasos;

	for (int i = 0; i < numCasos; i++) {
		casoDePrueba();
	}

	return 0;
}