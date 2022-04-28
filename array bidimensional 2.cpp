//Array sobredimensionado
#include <iostream>
using namespace std;
int main (){ 
	int datos[1000];
	int contador=0;
	int actual;
	do{
		cout<<"Dime un dato (5555 para salir):";
		cin>>actual;
		if ((actual != 55555) && (contador<=999)){
			datos[contador] = actual;
			contador++;
		}
	} while ((actual != 55555) && (contador<=999));
	
	cout<<"Los "<<contador<<" datos son: ";
	
	for (int i=0; i<contador; i++)
		cout<<datos [i]<<" " ;
	
	return 0;
}
