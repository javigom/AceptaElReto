/*
* Realizado por Javier G�mez (github.com/javigom) - 9/10/2019
*
* Problema 219 - La loter�a de la pe�a Atl�tica (aceptaelreto.com)
*
* MIT License
*/

#include <iostream>

using namespace std;

void casoDePrueba() {
	int num, decimo, numPares = 0;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> decimo;
		if (decimo % 2 == 0) {
			numPares++;
		}
	}
	cout << numPares << "\n";
}

int main() {

	unsigned int numCasos, i;
	cin >> numCasos;

	for (int i = 0; i < numCasos; i++) {
		casoDePrueba();
	}

	return 0;
}