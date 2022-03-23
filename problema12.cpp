#include <iostream>

using namespace std;

int main(){
	int num, num2, resto;
	while (true){
		cout << "Dame un numero: ";
		cin >> num;
		cout << "Dame otro numero: ";
		cin >> num2;
		
		resto = num%num2;
		
		if (num==num2){
			cout << "Son iguales";
		} else if (resto==0){
			cout << num << " es multiplo de " << num2 << endl;
		} else {
			cout << num << " NO es multiplo de " << num2 << endl;
		}
	}
	return 0;
}
