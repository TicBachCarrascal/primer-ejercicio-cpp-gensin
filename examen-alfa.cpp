#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

// Funcion para sacar un numero aleatorio del 0 al 9
int aleatorio(){
	int num;
	srand(time(NULL));
	num=rand()%10;
	return num;
}

// Funcion para mostrar los mensajes finales
void final(int tries){
		switch(tries){
		case 1:
			cout << "En solo un intento, que maravilla!"<< endl;
			break;
		case 2:
			cout << "Solo dos intentos, eres increible!"<< endl;
			break;
		case 3:
		case 4:
		case 5:
			cout << "Muy bien hecho!"<< endl;
			break;
		default:
			cout << "Más suerte para la proxima vez"<< endl;
	}
}

// Funcion para mostrar la introducción para el usuario
void inicio(){
	cout << "Debes acertar una palabra aleatoria de 5 letras. " << endl
	<< "En cada intento se te dira que letras estan en la palabra y si su posicion es correcta o no." << endl
	<< "Tienes hasta 6 intentos."<< endl << endl 
	<< "Comencemos!" << endl;
}

int main(){
	// Iniciamos las variables
	
	//Posibles palabras
	char palabras[10][5]={
		{'a','s','e','o','n'},
		{'b','u','s','c','o'},
		{'c','a','r','g','o'},
		{'d','a','t','o','s'},
		{'e','m','o','j','i'},
		{'f','r','i','t','a'},
		{'g','a','s','t','e'},
		{'i','d','e','a','s'},
		{'j','o','y','e','l'},
		{'l','a','b','i','o'}
	};
	// Palabra elegida
	int secretWord = aleatorio();
	// Numero máximo de intentos
	int maxTries = 6;
	// Numero de intentos del usuario
	int tries = 0;
	// Array para la palabra del usuario
	char userWord[5];
	// Booleano para saber si acertó
	bool acierto = true;
	
	inicio();
	
	// Bucle de juego
	do {
		// Reiniciamos el acierto
		acierto = true;
		// Aumentamos el intento
		tries++;
		// Primera letra
		cout << "Intenta adivinar la palabra. Dime la primera letra: "<< endl;
		cin >> userWord[0];
		// Bucle para el resto de letras
		for (int i=1;i<5;i++){
			cout << "Dime la siguiente letra: ";
			cin >> userWord[i];
		}
		// Bucle para saber si está o no la letra en la palabra a adivinar
		for(int user=0;user<5;user++){
			int secret;
			for (secret=0;secret<5;secret++){
				if (user == secret && userWord[user]==palabras[secretWord][secret]){
					cout << "La letra " << userWord[user] << " esta en la palabra y en la posicion correcta." << endl;
					break;
				} else if (userWord[user]==palabras[secretWord][secret]) {
					cout << "La letra " << userWord[user] << " esta en la palabra" << endl;
					acierto = false;
					break;
				}
			}
			if (secret > 4){
				cout << "La letra " << userWord[user] << " no esta en la palabra" << endl;
				acierto = false;
			}
		}
		if (acierto){
			cout << "Acertaste!" << endl;
			break;
		} else {
			cout << "Fallaste!" << endl;
			cout << "Intentalo de nuevo!" << endl;
		}	
	} while (tries < maxTries);
	
	final(tries);
	
	cout << "La palabra era ";
	for(int i=0;i<5;i++){
		cout << palabras[secretWord][i];
	}
	
	return 0;
}
