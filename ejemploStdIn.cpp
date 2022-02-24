#include <iostream>

int main(){
	int numero;
	int cuadrado;
	std::cout << "Dame un número: ";
	std::cin >> numero;
	cuadrado = numero * numero;
	std::cout << "El cuadrado de tu número es: " << cuadrado;
	return 0;
}
