#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, s, k, p, q, hasil=0;
	cin >> n >> s >> k;
	while(n--){
		cin >> p >> q;
		hasil += p*q;
	}
	if(hasil<s){
		hasil+=k;
	}
	cout << hasil;
}