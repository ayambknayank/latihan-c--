#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	
	long long terbesar=0;
	long long hadiah[n];
	
	for(int i=0; i<n; i++){
		cin >> hadiah[i];
	}
	
	for(int i=0; i<m; i++){
		terbesar+=hadiah[i];
	}
	
	long long max = terbesar;
	
	for(int i=0; i<n-m; i++){
		
		if(terbesar>max){
			max = terbesar;
		}		
		terbesar -= hadiah[i];
		terbesar += hadiah[i+m];
	}
	cout << max;
}