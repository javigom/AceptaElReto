/*

Realizado por Javier Gómez (github.com/javigom). 

10/11/2019

License GNU GPL v3.

*/

#include <iostream>

using namespace std;

void resuelveCaso() {
	cout << "Hola mundo.\n";
}

int main() {

	unsigned int numCasos;
	cin >> numCasos;

	for (int i = 0; i < numCasos; i++) {
		resuelveCaso();
	}

	return 0;
}