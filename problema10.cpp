#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int num1, num2;
	cout << "Dame un numero: ";
	cin >> num1;
	cout << "Dame otro numero: ";
	cin >> num2;
	
	if (num1<0 && num2<0){
		cout << "Los dos numeros son negativos";
	}else if (num1<0 || num2<0){
		cout << "Uno de los numeros es negativo.";
	} else {
		cout << "Ninguno de los numeros es negativo";
	}
	return 0;
}
