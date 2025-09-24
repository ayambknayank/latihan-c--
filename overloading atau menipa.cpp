#include <iostream>
using namespace std;

int luas(int p, int l){
	int hasil = p*l;
	return hasil;
}

int luas (int p){
	int hasil = p*p;
	return hasil;
}

double luas (double p){
	double hasil = p*p;
	return hasil;
}

int main (){
	cout << "luas kotak 2x3 = " << luas (2,3)<< endl;
	cout << "luas kotak 3x3 = " << luas (3)<< endl;
	cout << "luas kotak 3,5x3,5 = " << luas (3.5)<< endl;
}	