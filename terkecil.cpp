#include<bits/stdc++.h>
using namespace std;

int angka, hasil, n;

int main(){
	cin >> n;
	
	while(n--){
		cin >> angka;
		while(angka>9){
			hasil = 0;
			while(angka){
				hasil += angka%10;
				angka/=10;
			}
			angka = hasil; 
		}
		cout << angka << endl;
	}
}