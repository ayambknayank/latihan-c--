#include <iostream>
#include <cmath>

using namespace std;
//mencari sisi miring segitiga

double kuadrat (double x){
	double pangkat = x*x;
	return pangkat;
}





int main (){
	double panjang, tinggi;
	
	cout << "masukkan panjang : ";
	cin >> panjang;
	
	cout << "masukkan tinggi : ";
	cin >> tinggi;
	
	double miring = sqrt (kuadrat(panjang) + kuadrat (tinggi));
	
	cout << "panjang sisi miring nya adalah : ";
	cout << miring << endl;
}