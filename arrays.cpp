#include <iostream>

using namespace std;

int main(){
	int datos[7]={300,200,100,0,-100,250,175};
	int suma = 0;
	for(int i=0; i<=6;i++){
		cout << i << ".- Voy a sumar "<< datos[i] << " a " << suma << endl;
		suma += datos[i];
	}
	cout << "La suma es: " << suma << endl;
	
	suma = 0;
	int userData[5];
	for (int i=0; i<=4;i++){
		cout << "Dame el dato "<< i+1 << ": ";
		cin >> userData[i];
	}
	for (int i=0; i<=4;i++){
		cout << "El dato " << i+1 << " es " << userData[i] << endl;
		suma += userData[i];
	}
	cout << "La media de estos datos es: " << suma/5;
	return 0;
}
