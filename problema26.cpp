#include <iostream>

using namespace std;

void tabla(int principal){
	for(int i=0;i < 11; i++){
		cout << principal << " x " << i << " = " << principal*i << endl;
	}
	cout << endl;
}

int main(){
	int userNum;
	cout << "Voy a darte la tabla del numero que me digas."<<endl;
	cout << "Dime un numero: ";
	cin >> userNum;
	tabla(userNum);
	return 0;
}


