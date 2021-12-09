/*
* Realizado por Javier Gómez (github.com/javigom) - 17/11/2019
*
* Problema 169 - Carrera popular (aceptaelreto.com)
*
* MIT License
*/

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

void resuelveCaso() {
	string cadena;

	vector <char> apellidoActual, apellidoAnterior;

	int pos;

	bool hermanos = false;

	long long int participantes = 0, total = 0, parcial = 1;

	apellidoAnterior.clear();


	do {
		getline(cin, cadena);

		if (cadena != "====") {
			participantes++;
			pos = cadena.find_first_of(',');

			for (int i = 0; i < pos; i++) {
				apellidoActual.push_back(tolower(cadena[i]));
			}

			if (apellidoActual == apellidoAnterior) {
				parcial++;
				hermanos = true;
			}

			else if (hermanos) {
				total = total + parcial;
				parcial = 1;
				hermanos = false;
			}

			apellidoAnterior = apellidoActual;
			apellidoActual.clear();
			cadena.clear();
		}

	} while (cadena != "====");

	if (hermanos) {
		total = total + parcial;
	}

	cout << participantes << " " << total << "\n";
}

int main() {

#ifndef DOMJUDGE
	std::ifstream in("datos.txt");
	auto cinbuf = std::cin.rdbuf(in.rdbuf());
#endif
	int num;
	cin >> num;
	cin.ignore();
	for (int i = 0; i < num; i++) {
		resuelveCaso();
	}
#ifndef DOMJUDGE 
	std::cin.rdbuf(cinbuf);
#endif
	system("PAUSE");
	return 0;
}