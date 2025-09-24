#include <iostream>

using namespace std;

int main (){
	int a, b;
	
	cin >> a;
	cin >> b;
	
	int c = a/b;
	int d = a%b;
	
	if ((a>=1 and a<=100000) and (b>=1 and b<=100000)){
		cout << "masing-masing " << c << endl;
	cout << "bersisa " << d << endl;
	}
	else {
		//cout << "angka yang anda masukkan terlalu besar";
	}
	
}