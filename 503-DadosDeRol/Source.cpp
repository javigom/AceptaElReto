/*
* Realizado por Javier Gómez (github.com/javigom) - 26/01/2022
*
* Problema 503 - Dados de Rol (aceptaelreto.com)
*
* MIT License
*/

#include <iostream>
#include <map>
#include <vector>

using namespace std;

vector <int> resuelveCaso() {

	int n, m;
	cin >> n >> m;

	map<int, int> sumas;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {

			map<int, int>::iterator it = sumas.find(i + j);

			if (sumas.find(i + j) == sumas.end()) {
				sumas.insert(pair<int, int> (i + j, 1));
			}

			else {
				int valor = it->second;
				sumas.erase(it);
				sumas.insert(pair<int, int>(i + j, valor + 1));
			}
			
		}

	}

	vector<int> resul;
	int max = 0;

	for (map<int, int>::iterator it = sumas.begin(); it != sumas.end(); ++it) {
		if (max < it->second) {
			max = it->second;
			resul.clear();
			resul.push_back(it->first);
		}

		else if (max == it->second) {
			resul.push_back(it->first);
		}
	}

	return resul;
}

int main() {

	int numCasos;
	cin >> numCasos;

	for (int i = 0; i < numCasos; i++) {
		
		vector <int> resul = resuelveCaso();

		for (int j = 0; j < resul.size(); j++) {
			cout << resul[j];
			if (j == resul.size() - 1) {
				cout << '\n';
			}

			else {
				cout << " ";
			}
		}
	}

	return 0;
}