#include<bits/stdc++.h>
using namespace std;

bool prima(int x){
	if(x==1){
		return false;
	}
	for(int i=2; i*i<=x; i++){
		if(x%i==0){
			return false;
		}
	}
	return true;
}

int kombinasi(int a, int b){
	int tambah=1;
	while(tambah<=b){
		tambah *=10;
	}
	return a*tambah+b;
}

int main(){
	int m, n;
	cin >> m >> n;
	
	vector<int> angka;
	int j=0;
	
	for(int i=m; i<=n; i++){
		if(prima(i)){
			angka.insert(angka.begin()+j, i);
			j++;
		}
	}
	
	bool cek = false;
	for(int i=0; i<j; i++){
		for(int k = 1; k<j; k++){
			if(prima(kombinasi(angka[i], angka[k]))){
				cout << angka[i] << ' ' << angka[k]<< endl;
				cek = true;
			}
		}
	}
	if(!cek){
		cout << "TIDAK ADA" << endl;
	}
}