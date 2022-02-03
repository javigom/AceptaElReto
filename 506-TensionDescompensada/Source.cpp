/*
* Realizado por Javier Gómez (github.com/javigom) - 03/02/2022
*
* Problema 506 - Tensión descompensada (aceptaelreto.com)
*
* MIT License
*/

#include <iostream>

using namespace std;

int main() {

	int n;
	cin >> n;

	while (n-- > 0) {
		
		int tension_max, tension_min;
		char vacio;
		cin >> tension_max >> vacio >> tension_min;
		
		if (tension_max < tension_min) {
			cout << "MAL\n";
		}

		else {
			cout << "BIEN\n";
		}

	}

	return 0;
}