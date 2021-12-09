/*
* Realizado por Javier Gómez (github.com/javigom) - 14/11/2019
*
* Problema 272 - Tres dedos en cada mano (aceptaelreto.com)
*
* MIT License
*/

#include <iostream>

using namespace std;

void convert(int n) {
	int res = 0;

	if (n < 6) {
		cout << n;
	}

	else {
		convert(n / 6);
		cout << n % 6;
	}
}

int main() {
	int numCasos, num;
	cin >> numCasos;

	for (int i = 0; i < numCasos; i++) {
		cin >> num;
		convert(num);
		cout << "\n";
	}

	return 0;
}