#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	int pri, total=0;
	vector<bool> angka(n + 1, true);
	angka[0] = angka[1] = false;
	
	for(int i=2; i*i<=n ;++i){
		for(int j=i*i; j<=n; j+=i){
			angka[j] = false;;
		}
	}
	
	for(int i=2; i<=n; ++i){
		pri=0;
		for(int j=2; j<=i; ++j){
			if(angka[j] && i%j==0){
				pri++;
				if(pri>2){
					break;
				}
			}
		}
		if(pri==2){
			total++;
		}
	}
	
	cout << total << endl;
}