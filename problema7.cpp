#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int num, num2, resto;
	cout << "Dame un numero: ";
	cin >> num;
	cout << "Dame otro numero: ";
	cin >> num2;
	
	if (num < num2 && num != num2){
		cout << "El numero " << num << " es el menor.";
	} else if (num2 < num && num !=num2 ){
		cout << "El numero " << num2 << " es el menor.";
	} else {
		cout << "Los numeros son iguales!";
	}
		
	return 0;
}
