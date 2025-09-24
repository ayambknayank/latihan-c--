#include <bits/stdc++.h>
using namespace std;
#define dvec vector<vector<int>>
#define vec vector<int>
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

void solve(){
	int n;
	cin >> n;
//	vector<vector<int>> tabel(2, vector<int>(n));
//	for(int i=0; i<2; i++){
//		for(int j=0; j<n; j++){
//			cin >> tabel[i][j];
//		}
//	}
	string s1, s2;
	cin >> s1 >> s2;
	string baru="";
	for(int i=0; i<n; i++){
		if(s1[i+1]<s2[i]){
			baru+=s1[i+1];
		}else{
			for(int j=i; j<n; j++){
				baru+=s2[i];
			}
		}
	}
	cout << baru << endl;
}

int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
}