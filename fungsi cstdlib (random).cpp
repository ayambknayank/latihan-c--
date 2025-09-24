#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	char lempar;
	
	while (true){
	
	cout << "ingin melempar dadu? (y/n): ";
	cin >> lempar;
	
	if (lempar == 'y'){
		cout << 1+ rand() % 6 << endl;
	}
	else if (lempar == 'n'){
		cout << "\n oke dadahh";
		break;
	}
	else {
		cout << "perintah tidak diketahui \n";
	}
}
}