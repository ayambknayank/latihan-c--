#include <iostream>

using namespace std;

int main (){
	int a = 3;
	int b = 2;
	
	bool hasil;
	
	//not
	hasil = !(a == 3);
	
	//and
	
	cout << "untuk and \n" << endl; 
	hasil = (a == 3) and (b == 2);
	cout << hasil << endl;
	hasil = (a == 3) and (b == 3);
	cout << hasil << endl;
	hasil = (a == 2) and (b == 2);
	cout << hasil << endl;
	hasil = (a == 4) and (b == 24);
	cout << hasil << endl;
	
	//or
	
	cout << "untuk or atau ||" << endl;
	hasil = (a == 3) or (b == 2);
	cout << hasil << endl;
	hasil = (a == 3) or (b == 3);
	cout << hasil << endl;
	hasil = (a == 2) || (b == 2);
	cout << hasil << endl;
	hasil = (a == 4) || (b == 24);
	cout << hasil << endl;
	
} 
