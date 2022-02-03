/*
* Realizado por Javier Gómez (github.com/javigom) - 03/02/2022
*
* Problema 505 - Volando drones (aceptaelreto.com)
*
* MIT License
*/

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {

	int N, A, B;	

	while (cin >> N) {

		priority_queue<long long int> pilas_A, pilas_B;

		cin >> A >> B;

		long long int horas;

		vector<long long int> tiempos;

		for (int i = 0; i < A; i++) {
			cin >> horas;
			pilas_A.push(horas);
		}

		for (int i = 0; i < B; i++) {
			cin >> horas;
			pilas_B.push(horas);
		}

		while (!pilas_A.empty() && !pilas_B.empty()) {

			long long int tiempo = 0;

			vector<long long int> vector_A, vector_B;

			for (int i = 0; i < N; i++) {

				if (!pilas_A.empty() && !pilas_B.empty()) {
					long long int duracion_A = pilas_A.top();
					pilas_A.pop();
					long long int duracion_B = pilas_B.top();
					pilas_B.pop();

					if (duracion_A > duracion_B) {
						vector_A.push_back(duracion_A - duracion_B);
						tiempo += duracion_B;
					}

					else if (duracion_B > duracion_A) {
						vector_B.push_back(duracion_B - duracion_A);
						tiempo += duracion_A;
					}

					else {
						tiempo += duracion_A;
					}
				}

			}

			for (int i = 0; i < vector_A.size(); i++) {
				pilas_A.push(vector_A[i]);
			}

			for (int i = 0; i < vector_B.size(); i++) {
				pilas_B.push(vector_B[i]);
			}

			tiempos.push_back(tiempo);

		}

		for (int i = 0; i < tiempos.size(); i++) {
			cout << tiempos[i];
			if (i != tiempos.size() - 1) {
				cout << " ";
			}
		}

		cout << "\n";

	}

	return 0;
}