/*
* Realizado por Javier Gómez (github.com/javigom) - 23/10/2019
*
* Problema 446 - Abuelas falsas (aceptaelreto.com)
*
* MIT License
*/

#include <iostream>
#include <string>

using namespace std;

void casoDePrueba() {
	string nombreReal, nombre;
	int num;
	bool abuelaReal = true;
	cin >> nombreReal;
	cin >> num;
	if (num == 1) {
		cout << "FALSA" << endl;
		cin.ignore(65536, '\n');
	}

	else {
		for (int i = 0; i < num; i++) {
			cin >> nombre;
			if (i < num - 1 && nombre == nombreReal) {
				abuelaReal = false;
			}

			if (i == num - 1 && nombre != nombreReal) {
				abuelaReal = false;
			}
		}

		if (abuelaReal) {
			cout << "VERDADERA" << endl;
		}
		else
			cout << "FALSA" << endl;
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