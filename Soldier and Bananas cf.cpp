#include<bits/stdc++.h>
using namespace std;

int k, w;
long long n, hasil=0;

int main(){
	cin >> k >> n >> w;
	for(int i=1; i<=w; i++){
		hasil+=(k*i);
	}
	if(hasil<n){
		cout << "0";
	}else{
		cout << hasil-n;
	}
}