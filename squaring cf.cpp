#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
	bool cek = true;
	int hasil=0;
	int x; cin >> x;
	int now; cin >> now;
	for(int i=1; i<x; i++){
		int a; cin >> a;
		if(a == 1 && now!=a){
            cek = false;
            break;
        }
		while(now>a){
			a*=a;
			hasil++;
		}
		now=a;
	}
	if(cek){
		cout << hasil << endl;
	}else{
		cout << -1 << endl;
	}
}

int main(){
	int n; cin >> n;
	while(n--){
		solve();
		cout << endl;
	}
}