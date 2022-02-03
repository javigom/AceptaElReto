/*
* Realizado por Javier Gómez (github.com/javigom) - 04/02/2022
*
* Problema 507 - Tándem (aceptaelreto.com)
*
* MIT License
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool mysort(int i, int j) { return (i > j); }

long long int resuelveCaso(int n, int peso_max, vector<int> &vector_pesos) {

	long long int combinaciones = 0;

	sort(vector_pesos.begin(), vector_pesos.end(), mysort);

	int i = 0, j = n - 1;

	while (i < j) {

		if (vector_pesos[i] + vector_pesos[j] > peso_max) {
			i++;
		}
		else {
			combinaciones += (long long int) j - i;
			j--;
		}
	}

	return combinaciones;
}

int main() {

	int n, peso_max;

	while (true) {

		cin >> n >> peso_max;

		if (n == 0) {
			return 0;
		}

		vector<int> vector_pesos(n);

		for (int i = 0; i < n; i++) {
			cin >> vector_pesos[i];
		}

		cout << resuelveCaso(n, peso_max, vector_pesos) << "\n";

	}

	return 0;
}