//Muestra las tablas de multiplicar del 1 al 5
#include <iostream>
using namespace std;
int main ()
{
	//Crea dos variables. Tabla controla el numero de tabla 
	//que estamos usando, y número el número que multiplica por tabla
	//en cada tabla.
int tabla, numero;
for (tabla=1; tabla<=5; tabla++)
{
for(numero = 1; numero<=10; numero++)
cout<<tabla<<" por "<<numero <<" es "<<tabla*numero<<endl;
cout << endl;
}
return 0;
}
