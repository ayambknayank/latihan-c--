#include<bits/stdc++.h>
using namespace std;
#define int long long
#define bismillah ios_base::sync_with_stdio(NULL), cin.tie(0), cout.tie(0);
vector<int> lumpia;

void potong(int x){
	lumpia[x]/=2;
	lumpia.insert(lumpia.begin()+x+1, lumpia[x]);
}

signed main(){
	bismillah
	int n, l;
	cin >> n >> l;
	int b; cin >> b;
	lumpia.push_back(l/2);
	lumpia.push_back(l/2);
	for(int i=1; i<n; i++){
		int x; cin >> x;
		potong(x-1);
	}
	for(auto i : lumpia){
		cout << i << " ";
	}
}