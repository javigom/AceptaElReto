/*
* Realizado por Javier Gómez (github.com/javigom) - 24/11/2019
*
* Problema 252 - ¿Acaso hubo búhos acá? (aceptaelreto.com)
*
* MIT License
*/

#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

bool esPalindromo(const vector <char> & v, int ini, int fin) {
	
	bool palindromo = false;
	if (fin - ini < 1) {
		palindromo = true;
	}

	else {
		if (v[ini] == v[fin]) {
			palindromo = esPalindromo(v, ini + 1, fin - 1);
		}	
	}
	return palindromo;
}

bool resuelveCaso() {

	string cadena;
	getline(cin, cadena);
	vector <char> v;

	if (cadena != "XXX") {
		for (int i = 0; i < cadena.length(); i++) {

			if (cadena[i] != ' ') {
				v.push_back(tolower(cadena.at(i)));
			}
		}
		
		if (esPalindromo(v, 0, v.size() - 1)) {
			cout << "SI\n";
		}
		else {
			cout << "NO\n";
		}

		return true;
	}
	else {
		return false;
	}

}

int main() {
#ifndef DOMJUDGE
	std::ifstream in("datos.txt");
	auto cinbuf = std::cin.rdbuf(in.rdbuf());
#endif
	
	while (resuelveCaso()) {

	}

#ifndef DOMJUDGE 
	std::cin.rdbuf(cinbuf);
#endif
	return 0;
}