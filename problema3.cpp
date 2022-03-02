#include <iostream>
#include <cmath>

using namespace std;

// Mejoras: Usar un array para pedir tantas notas como se indique.
int main(){
	float num1, num2, num3, num4, media;
	cout << "Primera nota: ";
	cin >> num1;
	cout << "Segunda nota: ";
	cin >> num2;
	cout << "Tercera nota: ";
	cin >> num3;
	cout << "Cuarta nota: ";
	cin >> num4;
	media = (num1+num2+num3+num4)/4;
	cout << "La media de las notas es: " << media;
	return 0;
}
