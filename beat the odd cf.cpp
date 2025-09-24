#include<bits/stdc++.h>
using namespace std;

int n, ganjil, genap, a, x;

int main(){
	cin >> n;
	while(n--){
		genap = 0;
		ganjil = 0;
		cin >> x;
		for(int i=0; i<x; i++){
			cin >> a;
			if(a%2==0){
				genap++;
			}else{
				ganjil++;
			}
		}
		if(ganjil==x || genap==x){
			cout << 0 << endl;
		}else if(ganjil>=genap){
			cout << genap << endl;
		}else {
			cout << ganjil << endl;
		}
	}
	return 0;
}