#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, m, q;
	pair<int, int> a[100005];
	
	cin >> n >> m;
	
	for(int i=1; i<=n; i++){
		a[i].first = i;
		a[i].second = i;
	}
	
	for(int i=1; i<=m; i++){
		int x, y;
		cin >> x >> y;
		swap(a[x], a[y]);
	}
	cin>>q;
	while(q--){
		int x; cin >> x;
		cout << a[x].second << endl;
	}
}
