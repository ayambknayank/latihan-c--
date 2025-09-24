#include <iostream>
using namespace std;

int main (){
	int n;
	int angka =0;
	cin >> n;
	
	for (int i=1; i<=n; i++){
	
		for (int k=1; k<=i; k++){
			cout << angka;
			angka = (angka + 1)% 10;
			}
		
		cout << endl;
	}
	
}