/*
* Realizado por Javier Gómez (github.com/javigom) - 16/11/2019
*
* Problema 132 - Las cartas del abuelo (aceptaelreto.com)
*
* MIT License
*/

#include <iostream> 
#include <fstream>
#include <vector>

using namespace std;

bool casoDePrueba() {

	char c, auxchar;

	vector <int> n;
	bool continua = true;
	int i = 0, j = 1, aux1 = 0;

	cin.get(c);
	while (continua) {
		cin.get(auxchar);
		if (auxchar != '\n') {
			if (c == auxchar) {
				j++;
			}

			else {
				n.push_back(j + aux1);
				aux1 = n[i];
				j = 1;
				i++;
			}
			c = auxchar;
		}
		else {
			n.push_back(j + aux1);
			continua = false;
		}
	}

	int numFreq, freq1, freq2, freqAux, ini, fin, mitad, pos;
	bool encontrado;
	cin >> numFreq;

	if (numFreq == 0) {
		return false;
	}

	else {

		for (int i = 0; i < numFreq; i++) {

			cin >> freq1;
			cin >> freq2;
			if (freq1 >= freq2) {
				freqAux = freq1;
				freq1 = freq2;
				freq2 = freqAux;
			}

			ini = 0;
			fin = n.size() - 1;
			encontrado = false;
			pos = -1;

			while (ini <= fin && !encontrado) {
				mitad = (ini + fin) / 2;

				if (n[mitad] == freq1) {
					encontrado = true;
				}

				else if (freq1 < n[mitad]) {
					fin = mitad - 1;
				}

				else {
					ini = mitad + 1;
				}
			}

			if (encontrado) {
				pos = mitad + 1;
			}

			else {
				pos = ini;
			}

			if (freq1 == freq2) {
				cout << "SI\n";
			}

			else if (freq2 < n[pos]) {
				cout << "SI\n";
			}

			else {
				cout << "NO\n";
			}


		}

		cout << "\n";
		cin.ignore(1);
		return true;
	}
}

int main() {
#ifndef DOMJUDGE
	std::ifstream in("datos.txt");
	auto cinbuf = std::cin.rdbuf(in.rdbuf());
#endif

	while (casoDePrueba()) {
	}

#ifndef DOMJUDGE 
	std::cin.rdbuf(cinbuf);
#endif
	system("PAUSE");
	return 0;
}