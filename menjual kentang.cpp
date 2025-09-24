#include <bits/stdc++.h>
using namespace std;
#define dvec vector<vector<int>>
#define vec vector<int>
#define int long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

signed main(){
	bismillah
	int n, m;
	cin >> n >> m;
	int beratA = 0;
	for(int i=0; i<n; i++){
		int a;
		cin >> a;
		beratA += a;
	}
	//vec b(m, 0);
	int b[m];
	int beratB = 0;
	for(int i=0; i<m; i++){
		cin >> b[i];
		beratB += b[i];
	}
	sort(b, b+m, greater<int>());
	//sort(b.begin(), b.end(), greater<int>());//
	int sama = 1;
	int ans = 0;
	bool cek = false;
	if(beratA/(double)n > beratB/(double)m){
		cout << "0";
		return 0;
	}	
	for(int i=0; i<m; i++){
		ans += b[i];//*sama;
		beratA += b[i];//*sama;
		beratB -= b[i];//*sama;
		n++;// += sama;
		m--;// -= sama;
		//sama=1;
		if(b[i]==b[i+1]){
			//sama++;
			continue;
		}
		if(beratA/(double)n > beratB/(double)m){
			cek = true;
			break;
		}
	}
	if(cek){
		cout << ans;
	}else{
		cout << "-1";
	}
	return 0;
}