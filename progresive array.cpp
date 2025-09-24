#include <bits/stdc++.h>
using namespace std;
#define dvec vector<vector<int>>
#define vec vector<int>
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int n, c, d;
//vector<vector<int>> &a
bool proses(vec &a, int c, int d){
	sort(a.begin(), a.end());
	vector<vector<int>> tabel(n, vector<int>(n));
	tabel[0][0]=a[0];
	int l = 1;
	for(int i=0; i<n; i++){
		l=1;
		for(int j=0; j<n; j++){
			for(int k=l; k<n*n; k++){
				if(a[k]>tabel[i][j] + d){
					break;
				}
				if(tabel[i][j] + d == a[k]){
					tabel[i][j+1] = a[k];
					a[k]=0;
					l++;
				}else if(tabel[i][j] + d == a[k+1]){
					tabel[i][j+1] = a[k+1];
					a[k+1]=0;
					l+=2;
				}else{
					return false;
				}
			}
			if(j==n-1){
				if
			}
		}
	}
	return true;
}

void solve(){
	
	cin >> n >> c >> d;
	//vector<vector<int>> tabel(n, vector<int>(n));
	vec tabel(n*n);
	for(int i=0; i<n*n; i++){
		int x; cin >> x;
		tabel[i] = x;
	}
	if(proses(tabel, c, d)){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
}


int main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}