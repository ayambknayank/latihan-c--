#include<bits/stdc++.h>
using namespace std;;

int main(){
	int n;
	cin >> n;
	
	pair<int, string> nama[n+1];
	
	int karakter[n+1];
	string doi;
	for(int i=0; i<n; i++){
		cin >> doi;
		nama[i].second = doi;
		nama[i].first = doi.length();
	}
	
	sort(nama, nama+n);
	
	for(int i=0; i<n; i++){
		cout << nama[i].second << endl;
	}
}