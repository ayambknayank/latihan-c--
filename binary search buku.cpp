#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int binarysearch(int h[], int x, int n){
	int hasil = 0;
	int kiri =0;
	int kanan = n-1;
	while(kiri<=kanan && hasil==0){
		int tengah = (kanan+kiri)/2;
		if(x<h[tengah]){
			kanan = tengah-1;
		}else if(x>h[tengah]){
			kiri = tengah+1;
		}else{
			hasil = tengah+1;
		}
	}
	if(hasil==0){
		cout << "beri hadiah lain" << endl;
	}else{
		cout << hasil << endl;
	}
}

int main(){
	int n, x;
	cin >> n >> x;
	int angka[n+1];
	for(int i=0; i<n; i++){
		cin >> angka[i];
	}
	binarysearch(angka, x, n);
}