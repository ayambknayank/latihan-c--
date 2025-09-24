#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	int a[n+5], b[n+5];
	long long hasilA=0, hasilB=0;
	for(int i=0; i<n; i++){
		cin >> a[i];
		hasilA+=a[i];
	}
	for(int i=0; i<n; i++){
		cin >> b[i];
		hasilB+=b[i];
	}
	
	/*
	long long hasil=0;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			hasil+=a[i]+b[j];
		}
	}
	*/
	long long hasil;
	hasil = n*(hasilA+hasilB);
	
	cout << hasil;
}