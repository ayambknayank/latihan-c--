#include <iostream>
using namespace std;

long long fibonacci (int n);

int main (){
	long long angka;
	
	cout << "fibonacci ke- : ";
	cin >>  angka;
	long long hasil = fibonacci (angka);
	cout << "hasil dari fibonacci ke-" << angka << " adalah : " << hasil;
}


long long fibonacci(long long n){
	if ((n==0)||(n==1)){
		return n;
	}else {
		return fibonacci (n-2) + fibonacci (n-1);
	}
}