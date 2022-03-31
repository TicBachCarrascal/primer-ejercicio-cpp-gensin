#include <iostream>

using namespace std;

int main(){
	int userNum, intentosMax, secretNum, userIntentos;
	
	intentosMax = 6;
	secretNum = 56;
	userIntentos = 0;
	
	do{
		userIntentos++;
		cout << "Intento " << userIntentos << endl;
		cout << "Dame un numero del 1 al 100: ";
		cin >> userNum; 
		
		if (userNum == secretNum){
			break;
		} else {
			if(userNum < secretNum){
				cout << "El numero es mayor.";
			} else {
				cout << "El numero es menor.";
			}
		}		
	} while (userIntentos != intentosMax);
	
	return 0;
}
