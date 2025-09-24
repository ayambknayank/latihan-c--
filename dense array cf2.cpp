#include<bits/stdc++.h>
using namespace std;

int n, t, angka[1001], baru, operasi=0;

bool cek(int a, int b){
	if(max(a,b)/min(a, b)>2){
		return false;
	}
	return true;
}

int main(){
	cin >> n;
	while(n--){
		operasi=0;
		cin >> t;
		vector <int> angka(t);
		for(int i=0; i<t; i++){
			cin >> angka[i];
		}
		for(int i=0; i<t-1; i++){
			if(max(angka[i], angka[i+1])>2*min(angka[i], angka[i+1])){
				int baru=min(angka[i], angka[i+1]);
				int besar = max(angka[i], angka[i+1]);
				while(besar>2*baru){
					baru*=2;
					operasi++;
				}
			}
		}
		cout << operasi << endl;
	}
}