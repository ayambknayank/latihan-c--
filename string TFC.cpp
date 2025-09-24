#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
	string x;
	cin >> x;
	for(int i=0; i<x.length(); i++){
		if(x[i]=='T' && i>0){
			cout << "TIDAK";
			return 0;
		}if(x[i]!='F' && x[i]!='C' && x[i]!='T'){
			cout << "TIDAK";
			return 0;
		}
	}
	cout << "YA";
}