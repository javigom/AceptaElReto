/*
* Realizado por Javier Gómez (github.com/javigom) - 24/11/2019
*
* Problema 325 - Helados de cucurucho (aceptaelreto.com)
*
* MIT License
*/

#include <iostream>
#include <string>

using namespace std;

void cucurucho(int &vaini, int numChoco, int numVaini, string cadena) {

	if (numChoco + numVaini == 1) {
		if (numChoco == 1) {
			cadena = cadena + "C";
			numChoco--;
		}
		
		else {
			cadena = cadena + "V";
			numVaini--;
		}
		cout << cadena;

		if (!(cadena.find_last_of("V") == (vaini - 1))) { 
			cout << " ";
		}
	}

	else {
		if (numChoco == 0) {
			cucurucho(vaini, 0, numVaini - 1, cadena + "V");
		}

		else if (numVaini == 0) {
			cucurucho(vaini, numChoco - 1, numVaini, cadena + "C");
		}

		else {
			cucurucho(vaini, numChoco - 1, numVaini, cadena + "C");
			cucurucho(vaini, numChoco, numVaini - 1, cadena + "V");
		}
	}

}


void resuelveCaso() {
	int numChoco, numVaini;
	string cadena = "";
	cin >> numChoco;
	cin >> numVaini;
	cucurucho(numVaini, numChoco, numVaini, cadena);
	cout << "\n";
}

int main() {

	int numCasos;
	cin >> numCasos;
	for (int i = 0; i < numCasos; i++) {
		resuelveCaso();
	}

	return 0;
}