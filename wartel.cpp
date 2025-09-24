#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, q;
	cin >> n >> q;
	
	map <string, string> bukutelpon;
	string hp;
	string nama;
	for(int i=0; i<n; i++){
		cin >> nama >> hp;
		bukutelpon[nama] = hp;
	}
	
	string cari;
	for(int i=0; i<q; i++){
		cin >> nama;
		if(bukutelpon.find(nama) != bukutelpon.end()){
			cout << bukutelpon[nama] << endl;
		}else{
			cout << "NIHIL" << endl;
		}
	}
}