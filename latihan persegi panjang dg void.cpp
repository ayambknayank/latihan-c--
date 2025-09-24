#include <iostream>
using namespace std;

//membuat fungsi segitiga
// fungsi balikan atau reporter

double menghitung_luas(double p, double l){
	double luas = p * l;
	return luas;
}

double menghitung_keliling (double p, double l){
	double keliling = 2* (p+l);
	return keliling;
}

void tampilkan (double p, double l){
	cout << "luasnya adalah : ";
	cout << menghitung_luas (p, l)<< endl;
}

void tampilkan_keliling (double p, double l){
	cout << "luasnya adalah : ";
	cout << menghitung_keliling (p,l)<< endl;
}

int main(){
	
	double panjang, lebar;
	cout << "panjang : ";
	cin >> panjang;
	
	cout << "lebar : ";
	cin >> lebar;
	
	
	tampilkan (panjang, lebar);
	tampilkan_keliling (panjang, lebar);
	/*
	cout << "luasnya adalah : ";
	cout << menghitung_luas(panjang, lebar)<< endl;
	
	cout << "kelilingnya adalah : ";
	cout << menghitung_keliling (panjang, lebar);
	*/
	
	
	cin.get();
	return 0;
}