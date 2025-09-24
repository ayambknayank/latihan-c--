#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, k;
	cin >> n;
	
	int koin[n+5];
	for(int i=0; i<n; i++){
		cin >> koin[i];
	}
	cin >> k;
	
	int hasil=0;
	for(int i=n-1; i>=0; i--){
		if(k/koin[i]>0){
			hasil++;
			k%=koin[i];
		}
	}
	if(hasil==0){
		cout << "-1" << endl;
	}else{
		cout << hasil << endl;
	}
}