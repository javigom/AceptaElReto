# Acepta  el Reto
Recopilación de problemas resueltos de la web aceptaelreto.com

Realizado por Javier Gómez Moraleda.

MIT License.

## PLANTILLAS PARA LOS EJERCICIOS

### NÚMERO DE CASOS

```plain
#include <iostream>

using namespace std;

void casoDePrueba() {

}

int main() {

	unsigned int numCasos, i;
	cin >> numCasos;

	for (int i = 0; i < numCasos; i++) {
		casoDePrueba();
	}

	return 0;
}
```

### MARCA FINAL

```plain
#include <iostream> 
using namespace std;

bool casoDePrueba() {
	
	//leercasodeprueba
	if(es el caso que marca el final)
		return false;
	
	else{
		//CÓDIGO PRINCIPAL AQUÍ 
		return true;
	}
} //caso De Prueba 

int main() { 
	
	while(casoDePrueba()){
	}
	return 0;
} 
```

### FIN DE LA ENTRADA

```plain
#include <iostream>
using namespace std;

boolcasoDePrueba() {

	//leer caso de prueba
	if(!cin)
		return false;

	else{
		//CÓDIGO PRINCIPAL AQUÍ
		return true;
	}
} //caso De Prueba 

int main() {

	while(casoDePrueba()) {

	}

	return 0;
}
```

### E/S PARA FICHERO DE DATOS

```plain
#include <fstream>

int main() {
#ifndef DOMJUDGE
	std::ifstream in("datos.txt");
	auto cinbuf = std::cin.rdbuf(in.rdbuf());
#endif

	While(resuelveCaso()){
	}

#ifndef DOMJUDGE 
	std::cin.rdbuf(cinbuf);
#endif
	return 0;
}
```
                               
