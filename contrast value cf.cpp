#include<bits/stdc++.h>
using namespace std;

#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

void solve(){
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	//sort(a.begin(), a.end());
	vector<int> baru;
	baru.push_back(a[0]);
	for(int i=0; i+1<n; i++){
		if(a[i]!=a[i+1]){
			baru.push_back(a[i+1]);
		}
	}
//	cout << "ini karakter berbeda "<< baru.size() << endl;
	int ans = baru.size();
//	for(auto a:baru){
//		cout << a << " ";
//	}
//	cout << endl;
	for(int i=0; i+2<baru.size(); i++){
		if(baru[i]>baru[i+1] && baru[i+1]>baru[i+2] || baru[i]<baru[i+1] && baru[i+1]<baru[i+2]){
			ans--;
		}
	}
	cout << ans << endl;
}

int main(){
	bismillah
	int t; cin >> t;
	while(t--){
		solve();
	}
}