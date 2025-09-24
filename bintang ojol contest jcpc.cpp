#include<bits/stdc++.h>
using namespace std;
#define int long long


signed main(){
	int n, m;
	cin >> n >> m;
	int minimum=0, maksimum=0;
	int bintang = n;
	bool cek = false;
	
	//nilai minimum
	if(n>m*4){
		minimum = n-m*4;
		if(minimum<0){
			minimum=0;
		}
	}
	//nilai maksimum
	maksimum = abs((n-1*m)/4);
	if(maksimum<0){
		maksimum=0;
	}
	if(n>=m*1 && n<=m*5){
		cek = true;
	}
	if(cek){
		cout << minimum << ' ' << maksimum << endl;
	}else{
		cout << -1 << " " << -1;
	}
	
}