/*
* Realizado por Javier Gómez (github.com/javigom) - 23/10/2019
*
* Problema 172 - El pan en las bodas (aceptaelreto.com)
*
* MIT License
*/

#include <iostream>

using namespace std;

bool casoDePrueba() {

	int n;
	cin >> n;
	char pan;
	bool noComen = false, izquierda = false, derecha = false;
	if (n == 0) {
		return false;
	}

	else if (n == 1 || n == 2) {
		cout << "TODOS COMEN\n";
		cin.ignore(10, '\n');
	}

	else {
		
		for(int i = 0; i < n; i++) {
			cin >> pan;
			if (pan == 'D'){
				derecha = true;
			}
			else if (pan == 'I') {
				izquierda = true;
			}
			
			if (derecha && izquierda) {
				noComen = true;
			}
		}

		if (noComen) {
			cout << "ALGUNO NO COME\n";
		}
		else {
			cout << "TODOS COMEN\n";
		}

		return true;
	}
}

int main() {

	while (casoDePrueba()) {

	}

	return 0;
}