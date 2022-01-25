/*
* Realizado por Javier G�mez (github.com/javigom) - 25/01/2022
*
* Problema 564 - El misterioso caso de los m�ltiplos de 7 (aceptaelreto.com)
*
* MIT License
*/

#include <iostream>

using namespace std;

int casoDePrueba(long long int n) {
	return n / 3;
}

int main() {

	unsigned int numCasos, i;
	cin >> numCasos;

	long long int n;

	for (int i = 0; i < numCasos; i++) {
		cin >> n;
		cout << casoDePrueba(n) << endl;;
	}

	return 0;
}