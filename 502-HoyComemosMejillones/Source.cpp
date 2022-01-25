/*
* Realizado por Javier Gómez (github.com/javigom) - 25/01/2022
*
* Problema 502 - Hoy comemos mejillones (aceptaelreto.com)
*
* MIT License
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int n;

	while (cin >> n) {

		vector <int> mejillones;
		int valor;

		cin >> valor;
		mejillones.push_back(valor);

		for (int i = 1; i < n; i++) {
			cin >> valor;

			if (valor >= mejillones[mejillones.size() - 1]) {
				mejillones.push_back(valor);
			}

			else {
				vector <int>::iterator it = upper_bound(mejillones.begin(), mejillones.end(), valor);
				*it = valor;
			}

		}

		cout << mejillones.size() << "\n";
	}

	return 0;
}