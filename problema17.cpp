#include <iostream>

using namespace std;

int main(){
	int user, pass;
	int userSel = 2017;
	int passSel = 7890;
	do{
		cout << "Usuario: ";
		cin >> user;
		cout << "Password: ";
		cin >> pass;
		
		if (user != userSel) {
			cout << "Usuario incorrecto." << endl;
		} else {
			cout << "Usuario correcto." << endl;
		}
		if (pass != passSel) {
			cout << "Contraseņa incorrecta." << endl;
		} else {
			cout << "Contraseņa correcta.";
			break;
		}
		
	} while (true);
	
	return 0;
}
