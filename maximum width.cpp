#include <bits/stdc++.h>
using namespace std;
#define dvec vector<vector<int>>
#define vec vector<int>
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

void solve(){
	int n, m;
	cin >> n >> m;
	string s, t;
	cin >> s >> t;
	//kasus khusus
	if(s==t){
		cout << 1 << endl;
		return;
	}
	vector<int> kanan(m), kiri(m);
	
	int j=0;
	// cek elemen paling kiri
	for(int i=0; i<n; i++){
		if(s[i]==t[j]){
			kiri[j] = i;
			j++;
		}
		if(j==m) break;
	}
	j=m-1;
	//cek elemen paling kanan
	for(int i=n-1; i>=0; i--){
		if(s[i]==t[j]){
			kanan[j] = i;
			j--;
		}
		if(j<0)break;
	}
//	for(int i=0; i<m; i++){
//		//cout << kanan[i] << " " << kiri[i] << endl;
//	}
	int ans=0;
	for(int i=1; i<m; i++){
		ans = max(ans, kanan[i]-kiri[i-1]);
		//substr paling kanan yang memenuhi kuang dengan subst memenuhi paling kiri
	}
	cout << ans;
}

int main(){
	bismillah
	solve();
	
}