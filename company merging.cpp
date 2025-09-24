#include<bits/stdc++.h>
using namespace std;
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);
#define int long long

signed main(){
	int n;
	cin >> n;
	int ans=0;
	vector<int> arr;
	int m; cin >> m;
	int terbesar = 0;
	for(int j=0; j<m; j++){
		int x;
		cin >> x;
		arr.push_back(x);
		terbesar = max(terbesar, x);
	}
	priority_queue<int> cur;
	for(int i=1; i<n; i++){
		int m; cin >> m;
		for(int j=0; j<m; j++){
			int x;
			cin >> x;
			cur.push(x);
		}
		//cout << "ini ukuran terbesar " << terbesar << endl;
		//cout << "ini ukuran cur " << cur.size() << endl;
		if(cur.top() > terbesar){
			ans += (cur.top()-terbesar)*arr.size();
			for(int i=0; i<arr.size(); i++){
				arr[i] += cur.top()-terbesar;
			}
			terbesar = cur.top();
			while(!cur.empty()){
				arr.push_back(cur.top());
                cur.pop();
			}
		}else if(cur.top() < terbesar){
			ans += (terbesar-cur.top())*cur.size();
			while(!cur.empty()){
                arr.push_back(cur.top() + terbesar - cur.top());
                cur.pop();
            }
		}else{
			while(!cur.empty()){
                arr.push_back(cur.top());
                cur.pop();
            }
		}
		//cout << "ini nilai ans " << ans << endl;
	}
	cout << ans;
	return 0;
}