#include<bits/stdc++.h>
using namespace std;
#define int long long
#define bismillah ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);

signed main(){
	int k,n;
	cin >> k;
	vector<pair<int, int>> kandang(k);
	for(int i=0; i<k; i++){
		cin >> kandang[i].second;//banyak kandang
	}
	for(int i=0; i<k; i++){
		cin >> kandang[i].first;//biaya
	}
	
	cin >> n;
	vector<int> bebek(n);
	for(int i=0; i<n; i++){
		cin >> bebek[i];
	}
	sort(bebek.begin(), bebek.end(), greater<int>());
	sort(kandang.begin(), kandang.end());
	//greater<int>()
	
	//proses
	int ans=0, j=0;
	for(int i=0; i<n; i++){
		ans += bebek[i]*kandang[j].first;
		kandang[j].second--;
		
		if(kandang[j].second == 0) j++;
	}
	cout << ans << endl;
}