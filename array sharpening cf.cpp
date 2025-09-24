#include <bits/stdc++.h>
using namespace std;
#define dvec vector<vector<int>>
#define vec vector<int>
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

void solve(){
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	if(n==1){
		cout << "YES" << endl;
		return;
	}
	if(n==2){
		if(a[0]==0 && a[1]==0){
			cout << "NO" << endl;
			return;
		}else{
			cout << "YES" << endl;
			return;
		}
	}
	int awal = -1;
	int akhir = n-1;
	for(int i=0; i<n; i++){
		if(a[i] < i)break;
		awal=i;
	}
	for(int i=n-1; i>=0; i--){
		if(a[i] < n-1-i)break;
		akhir=i;
	}
	if(akhir<=awal){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
	return;
}

int main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}