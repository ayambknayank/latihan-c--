#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
	int n, m;
	cin >> n >> m;
	vector<pair<int, int>> data(n);
	for(int i=0; i<n; i++){
		int x;
		cin >> x;
		data[i].first = x;
	}
	for(int i=0; i<n; i++){
		int x;
		cin >> x;
		data[i].second = x;
	}
	int terbesar = 0;
	for(int k=0; k<m; k++){
		int hasil=0;
		for(int i=0; i<n; i++){
			//int x = (((data[i].first+k)%m)*data[i].second);
			int x = ((data[i].first+k)%m);
			hasil += x;
			//cout << x << endl;
		}
		terbesar = max(terbesar, hasil);
		cout << "f(" << k << ")  " << hasil << endl;
	}
	//cout << terbesar << endl;
}