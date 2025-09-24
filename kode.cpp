#include<bits/stdc++.h>
using namespace std;
#define int long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

signed main(){
	int n;
	cin >> n;
	vector<int> kandang(n);
	for(int i=0; i<=n; i++){
		cin >> kandang[i];
	}
	int m; cin >> m;
	int batas;
	for(int i=0; i<=n; i++){
		if(m >= kandang[i]){
			m -= kandang[i];
		}else{
			if(i<=0){
				cout << "0" << endl;
				return 0;
			}
			break;
		}
		batas = i;
	}
	cout << batas+1 << endl;
	for(int i=batas; i>=0; i--){
		cout << i;
	}
	cout  << endl;
	for(int i=batas; i>=0; i--){
		cout << i;
	}
	return 0;
}