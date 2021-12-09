/*
* Realizado por Javier Gómez (github.com/javigom) - 27/11/2019
*
* Problema 295 - Elévame (aceptaelreto.com)
*
* MIT License
*/

#include <iostream>

using namespace std;

const int MODULO = 31543;

long long int recur(long long int x, long long int n) {

	long long int n1;

	if (n == 1) {
		n1 = x;
	}

	else if (n == 0) {
		n1 = 1;
	}

	else {

		if ((n & 1) == 1) {
			n1 = (recur(x, n >> 1));
			n1 = n1 * n1 * x;
		}
		
		else {
			n1 = (recur(x, n >> 1));
			n1 = n1 * n1;
		}
	}

	return n1%MODULO;

}


bool resuelveCaso() {
	long long int x, n;
	cin >> x;
	cin >> n;

	if (x == 0 && n == 0) {
		return false;
	}
	else {
		cout << recur(x, n) << "\n";
		return true;
	}
}


int main() {

	while (resuelveCaso()) {

	}

	return 0;
}