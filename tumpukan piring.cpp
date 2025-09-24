#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	long long terbesar=0;
	long long piring;
	for(int i=0; i<n; i++){
		cin >> piring;
		if(terbesar<piring){
			terbesar = piring;
		}
	}
	cout << terbesar;
}