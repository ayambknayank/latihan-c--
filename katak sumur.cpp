#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, h;
	cin >> n >> h;
	
	int j[n];
	int terbesar=0;
	for(int i=0; i<n; i++){
		cin >> j[i];
		if(terbesar<j[i]){
			terbesar = j[i];
		}
	}
	
	int hasil=0;
	sort(j, j+n);
	
	int akhir=n;
	for(int i=0; i<n; i++){
		if(j[i]+terbesar >= h){
			cout << j[i]+terbesar;
			break;
		}
	}
}