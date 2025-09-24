#include <iostream>
using namespace std;

int main(){
	
	int a = 5;
	
	//pointer (*)
	int *aptr = &a;
	
	
	cout << "nilai dari a : " << a << endl;
	cout << "alamat dari a : " << &a << endl;
	
	
	
	cout << "alamat dari aptr : " << aptr << endl;
	
	//deferencing (mengambil nilai dari pointer)
	cout << "mengambil nilai dari aptr : " << *aptr << endl;
	
	
	
	//jadi pointer berfungsi untuk memindahkan alamat suatu
	//integer sehingga memiliki nilai yang sama
	
	//REFERENCE
	//membuat dua atau lebih integer memiliki alamat yang sama
	
	
	
	
	int &b = a;
	cout << "alamat dari b : " << &b << endl;
	cout << "nilai dari b : " << b << endl;
	
	b = 20;
	cout << "nilai dari a : " << a << endl;
	cout << "nilai dari b : " << b << endl;
	
	
}