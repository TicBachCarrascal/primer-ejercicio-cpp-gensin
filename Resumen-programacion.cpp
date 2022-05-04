#include <iostream>

using namespace std;

// Funciones

// Funcion que no devuelve nada.
void escribeDos(){
	cout << "Dos" << endl;
}

// Funcion que devuelve siempre lo mismo
int devuelveDos() {
	return 2;
}

// Funcion que devuelve la suma de dos parametros de entrada
int suma(int a, int b){
	return a + b;
}

// Funcion inicial
int main(){
	// Variables
	int numEntero1; // Creo una variable entera.
	float numReal; // Creo una variable real.
	numEntero1 = 0; // Doy valor a una variable.
	
	// Arrays
	// Creo un array con 5 posiciones
	int numsEnteros[5] = {10, 30, 2, 69, 43}; // Damos valor al array
	
	// Las posiciones de un array son: 0, 1, 2, 3, 4, ...
	int posicion1 = numsEnteros[0];
	
	//Recorrer un array
	for(int i=0; i < 5; i++){
		cout << "Valor en posicion " << i+1 << endl;
		cout << numsEnteros[i];
	}
	
	// Entrada salida
	cout << "Dame un numero entero: "; // Salida de un texto.
	cin >> numEntero1;	// Entrada a una variable.
	
	// Condicionales
	if (numEntero1>100){
		// Si es cierto hago esto.
	} else if (numEntero1<10){
		// Si no es cierto lo primero pero
		// es cierto lo segundo hago esto.
	} else {
		// Si ninguno de los dos es cierto hago esto.
	}
	
	switch (numEntero1){
		case 0: // Hago algo si es 0
			break;
		case 1: // Hago algo si es 1
			break;
		case 2:
		case 3:
		case 4: // Hago algo si es 2 a 4
			break;
		default: // Hago algo si no es ninguno anterior.
			break;
	}
	
	// Bucles
	int contador = 0;
	while(contador < 10){
		// Mientras sea cierto, voy a hacer esto.
		contador++;
	}
	
	do{
		contador++;
	} while(contador < 10);
	
	for(int i=0;i<10;i++){
		// Hace esto, como máximo, 10 veces.
	}
	
	// Llamadas a funciones
	escribeDos();
	cout << devuelveDos();
	cout << suma(3,5);
	return 0;
}
