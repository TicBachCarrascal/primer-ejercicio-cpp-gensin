#include <stdlib.h>
#include<iostream>
#include<time.h>
using namespace std;
int aleatorio,numero, i;
//i para el for, numero para el que introduzco yo, aletorio para el 
//del sistema
main()

{
	aleatorio = rand()%11 + 90;  // Este está entreo 0 y 100
	cout<<aleatorio;
	for(i=0;i<=5;i=i+1)
	{
	cout<<"Hemos pensado un numero. Introduce otro numero entre 0 y 100. Si adivinas el que tenemos has ganado la prueba\n";
	cin>>numero;
	if(numero==aleatorio)
	{
		cout<<"Has acertado";
		break;
	}
	else
	{
		if(numero>aleatorio)
		{
			cout<<"Tu numero es mayor que el numero introducido "<<endl;
		}
		else
		{
			cout<<"Es menor que el que has puesto"<<endl;
		}
	}
	
	}

	
}

