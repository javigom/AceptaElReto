/*
* Realizado por Javier Gómez (github.com/javigom) - 9/10/2019
*
* Problema 247 - Saliendo de la crisis (aceptaelreto.com)
*
* MIT License
*/

#include <iostream>

using namespace std;

bool casoDePrueba() {

	int num, i = 0, anterior, siguiente;
	bool si = true;
	cin >> num;

	if (num == 0) {
		return false;
	}

	cin >> anterior;
	for (int i = 0; i < num - 1; i++) {
		cin >> siguiente;
		if (anterior < siguiente) {
			anterior = siguiente;
		}
		else {
			si = false;
		}
	}
	if (si) {
		cout << "SI\n";
	}

	else
		cout << "NO\n";
}
	

int main() {

	while (casoDePrueba()) {

	}
	return 0;
}