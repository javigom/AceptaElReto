/*
* Realizado por Javier Gómez (github.com/javigom) - 10/10/2019
*
* Problema 374 - Criogenización (aceptaelreto.com)
*
* MIT License
*/

#include <iostream>

using namespace std;

void casoDePrueba() {
	
	long long int n, max, numMax = 0, min, numMin = 0;
	cin >> n;
	max = n;
	min = n;
	while (n != 0) {
		
		if (max < n) {
			max = n;
			numMax = 1;
		}
		else if (max == n) {
			numMax++;
		}

		if (min > n) {
			min = n;
			numMin = 1;
		}

		else if (min == n) {
			numMin++;
		}

		cin >> n;
	}

	cout << min << " " << numMin << " " << max << " " << numMax << endl;
}

int main() {

	unsigned int numCasos, i;
	cin >> numCasos;

	for (int i = 0; i < numCasos; i++) {
		casoDePrueba();
	}

	return 0;
}