#include<bits/stdc++.h>
using namespace std;;

int kandang[100001];

int cari(int x){
	if(x==kandang[x]) return x;
	return kandang[x] = cari(kandang[x]);
}

void join(int a, int b){
	a = cari(a);
	b = cari(b);
	if(a!=b){
		kandang[b]=a;
	}
}

bool cek(int a, int b){
	return cari(a) == cari(b);
}

int main(){
	int n, q;
	cin >> n >> q;
	
	int kar, a, b;
	
	for(int i=1; i<=n; i++){
		kandang[i]=i;
	}
	
	while(q--){
		cin >> kar >> a >> b;
		if(kar == 1){
			join(a, b);
		}else if(kar == 2){
			if(cek(a, b)){
				cout << "Y" << endl;
			}else{
				cout << "T" << endl;
			}
		}
	}
}