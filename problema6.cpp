#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int num, num2, resto;
	cout << "Dame un numero: ";
	cin >> num;
	cout << "Dame otro numero: ";
	cin >> num2;
	
	resto = num%num2;
	
	if (resto==0)
		cout << "El numero " << num << " es multiplo de " << num2;
	else
		cout << "El numero " << num << " no es multiplo de " << num2;
	return 0;
}
