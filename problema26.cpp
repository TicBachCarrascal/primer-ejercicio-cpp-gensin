#include <iostream>

using namespace std;

void subrayar(int tam){
	for(int i=0;i < tam; i++){
		cout << "-";
	}
	cout << endl;
}

int main(){
	cout << " Ejercicio 1"<<endl;
	subrayar(13);
	
	cout << " Ejercicio 2"<<endl;
	subrayar(10);
	
	cout << " Ejercicio 3"<<endl;
	subrayar(18);
	
	cout << " Ejercicio 4"<<endl;
	subrayar(25);
	
	return 0;
}


