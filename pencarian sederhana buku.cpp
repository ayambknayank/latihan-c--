#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int cari(int h[], int x, int n);


int main(){
	int n;
	int x;
	cin >> n >> x;
	int angka[1000];
	for(int i=0; i<n; i++){
		cin >> angka[i];
	}
	cari(angka, x, n);
}

cari(int h[], int x, int n){
	int hasil = 0;
	for(int i=0; i<n; i++){
		if(h[i]==x){
			hasil = i;
			break;
		}
	}
	if(hasil==0){
		cout << "beri hadiah lain" << endl;
	}else{
		cout << hasil+1 << endl;
	}
}