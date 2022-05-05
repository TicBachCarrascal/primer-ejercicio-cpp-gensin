#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int aleatorio(){
	int num;
	srand(time(NULL));
	num=rand()%11;
	return num;
}

int main(){
	char palabras[10][5]={
		{'a','s','e','o','s'},
		{'b','u','s','c','o'},
		{'c','a','r','g','a'},
		{'d','a','t','o','s'},
		{'e','m','o','j','i'},
		{'f','r','i','t','a'},
		{'g','a','s','t','e'},
		{'i','d','e','a','s'},
		{'j','o','y','e','l'},
		{'l','a','b','i','a'}
	};
	int tries = 0;
	int hits = 0;
	int userNum = 0;
	cout << "Debes acertar un numero aleatorio del 1 al 10 tantas veces como quieras." << endl;
	cout << "Saldras cuando escribas un numero negativo. Cuantos mas aciertes mejor."<<endl;
	do {
		if (tries == 0){
			cout << "Comencemos!" << endl;
		} else {
			cout << "Intentalo de nuevo!" << endl;
		}
		int guessNum = aleatorio();
		cout << "Intenta adivinar el numero: ";
		cin >> userNum;
		if (userNum == guessNum && userNum > 0){
			tries++;
			cout << "Acertaste!" << endl;
			hits++;
		} else if (userNum > 0){
			tries++;
			cout << "Fallaste!" << endl;
		}	
	} while (userNum > 0);
	
	switch (tries){
		case 0:
			cout << "Siento que no te apetezca hoy. Probaremos otro dia.";
			break;
		case 1: 
			cout << "Solo lo has intentado una vez. :( Has acertado " << hits << " veces";
			break;
		default:
			cout << "Buen trabajo. Has acertado " << hits << " veces de " << tries << "intentos.";
	}
	return 0;
}
