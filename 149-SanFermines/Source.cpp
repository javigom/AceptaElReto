/*
* Realizado por Javier Gómez (github.com/javigom) - 10/10/2019
*
* Problema 149 - San Fermines (aceptaelreto.com)
*
* MIT License
*/

#include <iostream>

using namespace std;

bool casoDePrueba() {

	long long int num, a, max = 0;
	cin >> num;

	if (!cin) {
		return false;
	}
	
	else {
		for (int i = 0; i < num; i++) {
			cin >> a;

			if (a > max) {
				max = a;
			}
		}
		cout << max << endl;
		return true;
	}
}

int main() {

	while (casoDePrueba()) {

	}

	return 0;
}