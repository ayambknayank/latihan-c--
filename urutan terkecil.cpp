#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int angka[n];
	for(int i=0; i<n; i++){
		cin >> angka[i];
	}
	
	sort(angka, angka+n);
	
	for(int i=0; i<n; i++){
		cout << angka[i] << endl;
	}
}