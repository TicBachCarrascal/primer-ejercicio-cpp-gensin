#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int num;
	cout << "Dame un numero del 1 al 10: ";
	cin >> num;
	if (num < 0 || num > 10){
		cout << "Dije del 1 al 10, melon." << endl;
		cout << "Dame un numero del 1 al 10: ";
		cin >> num;
	}
	if (num%2==0){
		cout << "El numero " << num << " es par.";
	} else {
		cout << "El numero " << num << " es impar.";
	}
		
	return 0;
}
