#include <iostream>
#include <cmath>

using namespace std;

// Mejoras: Usar una función para realizar la operación.
int main(){
	float PI = 3.14159265;
	float grados = 30;
	double gradosRadianes = grados*PI/180;
	cout << "El coseno de " << grados << " es " << cos(gradosRadianes) << endl;
	grados = 45;
	gradosRadianes = grados*PI/180;
	cout << "El coseno de " << grados << " es " << cos(gradosRadianes) << endl;	 		 
	grados = 60;
	gradosRadianes = grados*PI/180;
	cout << "El coseno de " << grados << " es " << cos(gradosRadianes) << endl;	 		 
	grados = 90;
	gradosRadianes = grados*PI/180;
	cout << "El coseno de " << grados << " es " << cos(gradosRadianes) << endl;	 		 
	return 0;
}
