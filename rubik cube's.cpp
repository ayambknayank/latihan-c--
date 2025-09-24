#include<iostream>
using namespace std;

int main(){
	int t, n;
	cin >> t;
	for(int i=0; i<t; i++){
		long hasil=0;
		cin >> n;
		long pengurang = n-2;
		hasil = (n*n*n)-pengurang*pengurang*pengurang;
		cout << hasil << endl;
	}
	
	return 0;
}