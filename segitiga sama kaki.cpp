#include <iostream>
using namespace std;

int main (){
	int n;
	cout << "membuat segitiga sama kaki \n";
	cout << "masukkan tinggi : ";
	cin >> n;
	cout << "pola 5 \n";
	
	for (int i=1; i<=n; i++){
		for (int k = n; k > i; k--){
			cout << " ";
		}
		for (int o = 1; o <= (2*i-1) ; o++){
			cout << "+";
		}
		cout << endl;
	}
	cout << endl << endl << endl;
	cout << "pola 6 \n";
	
	for (int i=1; i<=n; i++){
		for (int k = 1; k < i ; k++){
			cout << " ";
		}
		for (int o = (2*n-1) ; o >= (2*i-1) ; o--){
			cout << "+";
		}
		cout << endl;
	}
	
	cout << "pola 7 \n";
	for (int i=1; i<=n; i++){
		for (int k = n; k > i; k--){
			cout << " ";
		}
		for (int o = 1; o <= (2*i-1) ; o++){
			cout << "+";
		}
		cout << endl;
	}
	for (int i=2; i<=n; i++){
		for (int k = 1; k < i ; k++){
			cout << " ";
		}
		for (int o = (2*n-1) ; o >= (2*i-1) ; o--){
			cout << "+";
		}
		cout << endl;
	}
}