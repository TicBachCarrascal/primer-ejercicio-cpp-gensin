#include <iostream>
#include <cmath>

using namespace std;

//Mejoras: Pedir al usuario si quiere metros o pulgadas
int main(){
	float pul2met = 0.0254;
	float userPul, userMet;
	cout << "Cuantas pulgadas tienes? ";
	cin >> userPul;
	userMet = userPul*pul2met;
	cout << userPul << " Pulgadas son " << userMet << " Metros.";
	return 0;
}
