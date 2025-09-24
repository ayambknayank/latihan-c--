#include<bits/stdc++.h>
using namespace std;

int n, angka[1001], terbesar=0, terkecil=100000, urutK, urutB;

int main(){
	cin >> n;
	for(int i=1; i<=n; i++){
		cin >> angka[i];
		if(terbesar<angka[i]){
			urutB=i;
			terbesar=angka[i];
		}
		if(terkecil>=angka[i]){
			urutK=i;
			terkecil=angka[i];
		}
	}
	//cout << urutB << " " << urutK << endl;
	if(urutB>urutK){
		cout << urutB-1 +(n-urutK)-1;
	}else{
		cout << urutB-1 +(n-urutK);
	}
	
}