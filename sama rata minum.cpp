#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int boba[n+5];
	int jumlah=0;
	for(int i=0; i<n; i++){
		cin >> boba[i];
		jumlah+=boba[i];
	}
	
	sort(boba.begin(), boba.end(), greater<int>());
	
	int hasil;
	if(jumlah%n==0){
		int rata = jumlah%n;
		int perlu = 0;
		for(int i=1; i<n; i++){
			perlu += boba[i];
		}
		if(boba[0]-rata==perlu){
			for(int i=1; i<n; i++){
				hasil = perlu - boba[i];
				if(hasil==0){
					continue;
				}
				if(hasil>0){
					cout << hasil << " ";
				}
			}
		}
	}
}