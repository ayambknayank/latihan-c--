#include <iostream>
using namespace std;

double luas_kotak(double p, double l); //ini adalah prototipe

int main (){
	double panjang, lebar;
	
	cout << "panjang : ";
	cin >> panjang;
	
	cout << "lebar : " ;
	cin >> lebar;
	
	cout << "luasnya adalah : ";
	cout << luas_kotak(panjang, lebar);
}

double luas_kotak(double p, double l){//ini sambungannya
	return p*l;
}