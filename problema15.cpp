#include <iostream>

using namespace std;

int main(){
	int secret, num, tries, userTries;
	
	secret = 33;
	tries = 6;
	userTries = 0;
	
	cout << "Debe adivinar un numero que he elegido del 1 al 100." << endl;
	cout << "Tiene " << tries << " intentos." << endl;
	do{
		cout << endl;
		cout << "Intento " << userTries+1 << endl;
		cout << "Adivine el numero del 1 al 100: ";
		cin >> num;
		if (num > secret){
			cout << "Casi! El numero es menor." << endl;
		} else if (num < secret){
			cout << "Casi! El numero es mayor." << endl;
		}
		userTries++;
		if (userTries == tries){
			break;
		}
	} while (num != secret);
	
	if (userTries > tries){
		cout << endl << "Una lastima, has gastado todos tus intentos" << endl;
		cout << "El numero era " << secret;
	} else {
		cout << endl << "Buen trabajo! Ese era el numero." << endl;
		cout << "Solo has necesitado " << userTries << " intentos.";
	}
	return 0;
}
