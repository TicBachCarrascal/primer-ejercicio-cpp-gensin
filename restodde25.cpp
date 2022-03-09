#include <iostream>
using namespace std;

int main ()
{
	int numero, resto;
	cout<< "Dime un numero entero\n";
	cin>> numero;
	//resto = numero % 5;
	if (numero % 5 == 0)
		cout<< "Tu numero es divisible entre 5";
	else
		cout<< "Tu numero no es divisible entre 5";
}
