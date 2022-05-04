#include <iostream>

using namespace std;

int suma(int a, int b){
		return a + b;
}
int main(){
	// Variables
	int variableEntera = 0, userDatos;
	float variableDecimal = 0.0;
	double variableDecimalLarga;
	variableDecimalLarga = 0.0;
	
	// Arrays
	int arrayEntero[12];
	double arrayDecimal[5] = {2.3,4.5,3.4,5.6,4.3};
	
	// Interaccion con usuario
	cout << "Un texto " << variableEntera << " Otro texto"<< endl;
	cin >> userDatos;
	
	// Condicional
	if (userDatos > variableEntera) {
		// Se hace esto si la primera condicion es cierta.
	} else if (userDatos < -50){
		// Se hace esto si la primera condicion NO es cierta 
		// y la segunda condicion es cierta.
	} else {
		// Se hace esto si todas las condiciones NO son ciertas.
	}
	
	switch (userDatos){
		case 0:
		case 1:
			// Se hace esto si userDatos es 0 ó 1.
			break;
		case 2:
			// Se hace esto si userDatos es 2.
			break;
		default:
			// Se hace esto si userDatos NO es 0, 1 ó 2.
			break;
	}
	
	// Bucles
	int cont = 0;
	while (cont < userDatos){
		// Se hace esto mientras la condicion sea cierta. Puede hacerse ninguna vez.
		cont++;
	}
	
	cont = 0;
	do {
		// Se hace esto mientras la condicion sea cierta. Se hace siempre, al menos, una vez.
		cont++;
	} while (cont < userDatos);
	
	for(int i=0;i<userDatos;i++){
		// Se hace esto hasta que la condición sea falsa.
	}
	
	// Recorrer arrays
	for (int i=0;i < 5; i++){
		cout << arrayDecimal[i] << " " << endl;
	}
	
	// Funciones
	cout << suma(2,userDatos);
		
	return 0;
}
