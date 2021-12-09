/*

Realizado por Javier Gómez (github.com/javigom) - 26/9/2019

Problema 117 - La fiesta aburrida (aceptaelreto.com)

GNU General Public License v3

*/

#include <iostream>
#include <string>

using namespace std;

void resuelveCaso(string nombre) {
	cout << "Hola, " + nombre <<".\n";
}

int main() {

	unsigned int numCasos, i;
	string n;
	cin >> numCasos;

	for (int i = 0; i < numCasos; i++) {
		cin >> n;
		cin >> n;
		resuelveCaso(n);
	}

	return 0;
}
