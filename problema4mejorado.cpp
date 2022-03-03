#include <iostream>
#include <cmath>

using namespace std;

//como se pide un bool?
int main(){
	float pul2met = 0.0254;
	bool isPul = true;
	float userPul, userMet;
	cout << "Vas a medir pulgadas? ";
	cin >> isPul;
	if(isPul){
		cout << "Cuantas pulgadas tienes? ";
		cin >> userPul;
		userMet = userPul*pul2met;
		cout << userPul << " Pulgadas son " << userMet << " Metros.";	
	} else {
		cout << "Cuantos metros tienes? ";
		cin >> userPul;
		userMet = userPul/pul2met;
		cout << userPul << " Metros son " << userMet << " Pulgadas.";		
	}
	
	return 0;
}
