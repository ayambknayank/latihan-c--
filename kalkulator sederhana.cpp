#include <iostream>

using namespace std;

int main() {

	float a, b, hasil;
	char aritmatika;

	cout << " selamat datang di kalkulator fadhil \n \n"<< endl;
	cout << "masukkan nilai : "; cin >> a;
	
	
	cout << "pilih operator (*, /, +, -) : "; cin >> aritmatika ;
	
	
	cout << "masukkan nilai kedua : ";  cin >> b;


	cout << "hasil perhitungan : ";
	cout << a << aritmatika << b ;

	switch (aritmatika) {
		case '+':					
		hasil = a + b;
			break;

		case '-':
			hasil = a-b;
			break;

		case '*':
			hasil = a*b;
			break;

		case '/':
			hasil = a/b;
			break;

		default:
			cout << "operator anda salah"<< endl;

	}

	cout << " = " << hasil << endl;

	cin.get();
	return 0;
}