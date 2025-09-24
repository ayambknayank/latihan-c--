#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
	int n, m;
	cin >> n >> m;
	int data[n];
	for(int i=0; i<n; ++i){
		cin >> data[i];
	}
	int total = 1<<n;
	for(int i=0; i<total; ++i){
		ll ans = 0;
		for(int j=0; j<n; ++j){
			if(i&(1<<j)){
				ans+=data[j];
			}
		}
		if(ans==m){
			cout << "bisa" << endl;
			return;
		}
	}
	cout << "tidak bisa" << endl;
}

int main(){
	solve();
}