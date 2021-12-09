/*
* Realizado por Javier Gómez (github.com/javigom) - 15/11/2019
*
* Problema 224 - Los bocadillos de la hormiga reina (aceptaelreto.com)
*
* MIT License
*/

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void resuelveCaso(vector <long long int> &v, long long int num) {

	long long int suma = 0, siguiente, pos = -1;
	for (int i = num - 1; i > 0; i--) {
		suma = suma + v[i];
		if (suma == v[i - 1]) {
			pos = i;
		}
	}
	if (pos == -1) {
		cout << "NO\n";
	}

	else {
		cout << "SI " << pos << "\n";
	}
}

int main() {

	long long int n, aux;
	vector<long long int> v;
	cin >> n;
	while (n != 0) {
		for (int i = 0; i < n; i++) {
			cin >> aux;
			v.push_back(aux);
		}
		resuelveCaso(v, n);
		v.clear();
		cin >> n;
	}

	return 0;
}