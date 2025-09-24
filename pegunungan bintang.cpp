#include <iostream>
using namespace std;

void gambar(int n){
	if (n>0){
		gambar(n-1);
		for(int i=1; i<=n; i++){
			cout << "*";
		}
		cout << endl;
		gambar (n-1);
	}
}

int main(){
	int n;
	cin >> n;
	
	gambar (n);
}