#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, q, low1;
	cin >> n >> q;
	
	string nama[n+1];
	int no[n+1];
	for(int i=0; i<n; i++){
		cin >> nama[i] >> no[i];
	}
	string cari;
	
	for(int i=0; i<q; i++){
		cin >> cari;
		low1 = upper_bound(nama, nama+n, cari)-nama;
		cout << no[low1-1] << endl;
	}
}