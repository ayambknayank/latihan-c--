#include <iostream>
using namespace std;

int faktorial(int a);

int main (){
	int b, hasil;
	cout << "masukkan angka : ";
	cin >> b;
	hasil = faktorial (b);
	cout << "\nhasilnya adalah : " << hasil << endl;
}


int faktorial(int a){
	if (a<=1){
		cout << a;
		return a;
	}else{
		cout << a << "*";
		return a*faktorial(a-1);
	}
}