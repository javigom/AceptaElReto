/*
* Realizado por Javier Gómez (github.com/javigom) - 23/01/2022
*
* Problema 306 - Dos Igualdades Sorprendentes (aceptaelreto.com)
*
* MIT License
*/

#include <iostream>

using namespace std;

typedef struct {
	long long int f1c1;
	long long int f1c2;
	long long int f2c1;
	long long int f2c2;
} tMatriz;

const long long int MAX = 46337;

tMatriz multiplica_matrices(const tMatriz &matriz1, const tMatriz &matriz2) {

	tMatriz resul;
	resul.f1c1 = (matriz1.f1c1 * matriz2.f1c1 + matriz1.f1c2 * matriz2.f2c1) % MAX;
	resul.f1c2 = (matriz1.f1c1 * matriz2.f1c2 + matriz1.f1c2 * matriz2.f2c2) % MAX;
	resul.f2c1 = (matriz1.f2c1 * matriz2.f1c1 + matriz1.f2c2 * matriz2.f2c1) % MAX;
	resul.f2c2 = (matriz1.f2c1 * matriz2.f1c2 + matriz1.f2c2 * matriz2.f2c2) % MAX;
	
	return resul;
}

tMatriz recur(long long int n) {

	tMatriz resul, matriz1, matriz2;

	if (n == 0) {
		resul.f1c1 = 0;
		resul.f1c2 = 0;
		resul.f2c1 = 0;
		resul.f2c2 = 1;
	}

	else if (n == 1) {
		resul.f1c1 = 0;
		resul.f1c2 = 1;
		resul.f2c1 = 1;
		resul.f2c2 = 1;
	}

	else {
		
		if (n % 2 == 0) {
			matriz1 = recur(n / 2);
			matriz2 = matriz1;
		}

		else {
			matriz1 = recur(n / 2);
			matriz2.f1c1 = matriz1.f2c1;
			matriz2.f1c2 = matriz1.f2c2;
			matriz2.f2c1 = matriz1.f1c1 + matriz1.f2c1;
			matriz2.f2c2 = matriz1.f1c2 + matriz1.f2c2;
		}

		resul = multiplica_matrices(matriz1, matriz2);
		
	}

	return resul;
}

bool resuelveCaso() {

	long long int n;
	cin >> n;

	if (n == 0) {
		return false;
	}

	else {
		cout<< recur(n).f1c2 <<endl;
		return true;
	}
}

int main() {

	while (resuelveCaso()) {
	}

	return 0;
}