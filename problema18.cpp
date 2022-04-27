#include <iostream>

using namespace std;

int main(){
	int userNums[4];
	int media;
	
	for(int i=0;i<4;i++){
		cout << "Dame el dato " << i+1;
		cin >> userNums[i]; 
	}
	
	for(int i=0;i<4;i++){
		cout << userNums[i]<< " ";
	
	}
	
	return 0;
}
