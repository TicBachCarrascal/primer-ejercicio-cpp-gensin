#include <iostream>
#include <cmath>

using namespace std;

int main(){
	float num, num2;
	float resto;
	cout << "Dame un numero: ";
	cin >> num;
	cout << "Dame otro numero: ";
	cin >> num2;
	
	if (num2!=0){
		resto = num/num2;
		cout << "La division de ambos es " << resto;
	}else{
		cout << "No puede dividirse un numero entre 0";
	}
	return 0;
}
