#include <iostream>
using namespace std;

int main (){
	int n;
	
	cout << "masukkan panjang pola : ";
	cin >> n;
	
	cout << "pola 1\n";
	for (int i = 1; i<=n; i++){
		for (int k = 1; k<=i; k++){
			
		cout << "+";
		}
	cout << endl;
	}
	
	cout << "pola 2\n";
	
	for (int i=1;i<=n;i++){
		for (int k = n; k>= i; k--){
			cout << "+";
		}
		cout << endl;
	}
	
	cout << "pola 3\n";
	
	for (int i=1;i<=n;i++){
		for (int k = 1; k < i; k++){
			cout << " ";
		}
		for (int o = n; o >= i; o--){
			cout << "+";
		}
		cout << endl;
	}
	
	cout << "pola 4\n";
	
	for (int i=1;i<=n;i++){
		for (int k = n; k > i; k--){
			cout << " ";
		}
		for (int o = 1; o <= i; o++){
			cout << "+";
		}
		cout << endl;
	}
	
	
	cin.get();
	return 0;
}