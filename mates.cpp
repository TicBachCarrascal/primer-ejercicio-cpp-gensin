#include <iostream>
#include <cmath>
using namespace std;

int dameCoseno(int grados, bool isFirst = false){
	if (!isFirst){
		cout << "\n";
	}
	cout << "El coseno del ángulo " << grados << " es " << cos(grados);
	return 0;
}

int main(){
	dameCoseno(30, true);
	dameCoseno(45);
	dameCoseno(60);
	dameCoseno(90);
	return 0;
}


