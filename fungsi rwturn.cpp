#include <iostream>
using namespace std;

int kuadrat(int x){		 
	int y;			//ini merupakan fungsi return
	y= x*x;
	return y;
}

int tambah (int a, int b){
	int c;			//berguna untuk tidak menulis ulang rumus pada fungsi di bawah, hanya menuliskan "tambah" untuk mendapatkan nilai tambah
	c = a + b;
	return c;
}


int main (){
	
	int input, hasil, a, b, c;
	cout << "masukkan kuadrat dari: ";
	cin >> input;
	
	hasil = kuadrat (input);
	
	cout << hasil << endl;
	
	cout << "\nmasukkan nilai a: ";
	cin >> a;
	cout << "masukkan nilai b: ";
	cin >> b;
	
	c = tambah (a,b);
	cout << c;

	
	cin.get();
	return 0;
}