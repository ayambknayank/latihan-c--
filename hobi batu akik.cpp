#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);

int main(){
	bismillah
	int t, x, y;
	cin >> t;
	vector<int> harga;
	while(t--){
		cin >> x;
		int tertinggi = 0;
		if(x==1){
			cin >> y;
			harga.push_back(y);
			sort(harga.begin(), harga.end());
		}else if(x==2){
			//cout << harga[harga.size()-1] << endl;
			cout << harga.back() << endl;
		}else if(x==3){
			//harga.erase(harga, 1);
			harga.pop_back();
		}
	}
}