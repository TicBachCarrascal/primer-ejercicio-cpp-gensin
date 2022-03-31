#include <iostream>

using namespace std;

int main(){
	
	int userNum, total;
	total = 0;
	do {
		cout << "Dame un numero positivo: ";
		cin >> userNum;
		
		if (userNum>0){
			total = userNum + total;
			cout << "Llevas sumado: " << total << endl; 
		} else {
			cout << "Has sumado: " << total;
			break;
		}
	} while(userNum>0);
	
	return 0;
}
