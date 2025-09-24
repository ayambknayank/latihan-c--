#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

void mex(int x, int n, vector<int> arr){
	vector<int> salin(n);
	for(int i=0; i<n; i++){
		salin[i]=arr[i];
	}
	sort(salin.begin(), salin.end());
	int ganti;
	for(int i=0; i<n; i++){
		if(salin[i]!=i){
			ganti = i;
		}
	}
	arr[x] = ganti;
}

void solve(){
	int n,k;
	cin >> n >> k;
	vector<bool> cek(n+2, false);
	vector<int> vec;
	for(int i = 0; i < n; i++){
		int x; cin >> x;
		vec.push_back(x);
		cek[x] = 1;
	}
	for(int i = 0; i <= n; i++){
		if(!cek[i]){
			vec.push_back(i);
		}
	}
	if(k%(n+1) == 0){
		for(int i = 0; i < n; i++){
			cout << vec[i] << ' ';
		} 
		cout << endl;
		return;
	}
	for(int i = 0; i < n; i++){
		cout << vec[((n+1)-(n+1+k-i)%(n+1))%(n+1)] << ' ';
	}
	cout << endl;
}

int main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}