/*
* Realizado por Javier Gómez (github.com/javigom) - 13/11/2019
*
* Problema 237 - Números polidivisibles (aceptaelreto.com)
*
* MIT License
*/

#include <iostream>

using namespace std;


bool casoDePrueba(long long int n, int& devs) {

	bool b;
	if (n < 10) {
		++devs;
		return true;
	}

	else {
		b = casoDePrueba(n / 10, devs);
		b = b && ((n%devs) == 0);
		++devs;
		return b;

		/*
		if (casoDePrueba(n / 10) && ((n%digit) == 0)) {
			digit++;
			return true;
		}*/
	}
}

int main() {
	long long int num;
	int devs;
	cin >> num;
	while (cin) {
		devs = 1;
		if (casoDePrueba(num,devs)) {
			cout << "POLIDIVISIBLE" << endl;
		}

		else {
			cout << "NO POLIDIVISIBLE" << endl;
		}

		cin >> num;
	}

	return 0;
}