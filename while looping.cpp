#include <iostream>
using namespace std;

int main (){
	
	int a = 5;
	//berguna untuk melakukan copy dengan memenuhi syarat 
	while (/*syarat */a<10){
		cout << a << endl;
		//bisa memakai a++ atau a+=
		a+=2;
	}
	
	cout << "selesai" << endl;
}