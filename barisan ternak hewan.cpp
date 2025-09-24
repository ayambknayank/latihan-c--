#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, q, tanya, x, hasil=0;
	cin >> n;
	
	int jenis[n];
	for(int i=1; i<=n; i++){
		cin >> x;
		hasil+=x;
		jenis[i]=hasil;
	}
	
	int low1;
	cin >> q;
	while(q--){
		cin >> tanya;
		//low1 = upper_bound(jenis, jenis+n, tanya)-jenis;
		int l=1, r=n, k=0;
		while(l<=r){
			k=(l+r)/2;
			if(tanya<=jenis[k] && tanya>jenis[k-1]){
				cout << k << endl;
				break;
			}else if(tanya > jenis[k]) l=k+1;
			else if(tanya <= jenis[k] && tanya<=jenis[k-1]) r=k-1;
		}
	}
}