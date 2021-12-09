/*
* Realizado por Javier Gómez (github.com/javigom) - 13/11/2019
*
* Problema 225 - El otro hijo de Bonacci (aceptaelreto.com)
*
* MIT License
*/

#include <iostream>
using namespace std;

const int MAX = 1000000007;

typedef struct {
	long long int r;
	long long int ant;
} pack;

pack fib(int n, int x, int y) {
	pack mipack;
	long long int aux;
	if (n == 0) {
		mipack.r = x;
		mipack.ant = 0;
	}

	else if (n == 1) {
		mipack.r = y;
		mipack.ant = x;
	}

	else {
		mipack = fib(n - 1, x, y);
		aux = mipack.r + mipack.ant;
		mipack.ant = mipack.r % MAX;
		mipack.r = aux % MAX;
	}
	return mipack;
}

int main() {
	int n, x, y;
	pack mipack;
	cin >> n >> x >> y;
	while (cin) {
		mipack = fib(n, x, y);
		cout << mipack.r << "\n";
		cin >> n >> x >> y;
	}
}