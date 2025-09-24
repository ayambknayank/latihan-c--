#include<bits/stdc++.h>
using namespace std;

long long n, q, t, x, y;

int main(){
	cin >> n >> q;
	long long awal=0, akhir=0;
	while(q--){
		cin >> t >> x >> y;
		if(t==1){
			awal+=y;
			if(x==n){
				akhir+=y;
			}
		}else if(t==2){
			akhir-=y;
			if(x==n){
				awal-=y;
			}
		}
	}
	akhir*=-1;
	cout << max(awal, akhir);
}