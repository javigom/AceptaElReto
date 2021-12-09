/*
* Realizado por Javier Gómez (github.com/javigom) - 16/11/2019
*
* Problema 245 - Los Dalton (aceptaelreto.com)
*
* MIT License
*/

#include <iostream>
#include <fstream>

using namespace std;

bool resuelveCaso(int n) {

	bool dalton, ascendente = true, descendente = true;
	long long int anterior, actual, i = 0;

	if (n == 0) {
		return false;
	}

	else if (n == 1) {
		return false;
		cin >> anterior;
	}

	else {
		cin >> anterior;
		while (i < n - 1) {
			cin >> actual;
			ascendente = ascendente && (anterior < actual);
			descendente = descendente && (anterior > actual);
			i++;
			anterior = actual;
		}

		if (ascendente || descendente) {
			return true;
		}
		else {
			return false;
		}
	}
	

}

int main() {

	#ifndef DOMJUDGE
		std::ifstream in("datos.txt");
		auto cinbuf = std::cin.rdbuf(in.rdbuf());
	#endif

	long long int num;
	cin >> num;
	while (num != 0) {
		if (resuelveCaso(num)) {
			cout << "DALTON\n";
		}

		else {
			cout << "DESCONOCIDOS\n";
		}
		cin >> num;
	}

	#ifndef DOMJUDGE 
		std::cin.rdbuf(cinbuf);
	#endif

	system("PAUSE");
	return 0;
}