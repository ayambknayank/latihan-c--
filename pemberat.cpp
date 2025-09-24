#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
	int b, k;
	cin >> b >> k;
	int selisih = k-b;
	int bagi = 1;
	for(int i=1; i<=60; i++){
		if(bagi>selisih){
			bagi/=2;
			break;
		}
		bagi *= 2;
	}
	//cout << selisih << endl;
	while(bagi>0){
		if(selisih-bagi>=0){
			selisih -= bagi;
			cout << bagi << endl;
		}
		bagi/=2;
	}
}