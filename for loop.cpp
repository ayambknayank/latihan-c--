#include <iostream>
using namespace std;

int main (){
	
	int a;
	
	cout << "loop 1 \n";
	for (a=1 ; a<=10 ; a++){
		cout << a << endl;
	}
	
	cout << "\nloop 2 \n";
	for (a=1 ; a<=10 ; a += 2){
		cout << a << endl;
	}
	
	cout << "\nloop 3 \n";
	for (a=1 ; a>=-10 ; a--){
		cout << a << endl;
	}
	
	int total = 0;
	cout << "\nloop 4 \n";
	for (a=1 ; a<=10 ; a++, total ++){
		cout << a << " || "  << total << endl;
	}
}