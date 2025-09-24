#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int main(){
	int n; cin >> n;
	int ans=-1e9;
	for(int i=0; i<n; i++){
		int x; cin >> x;
		ans = max(x, ans);
	}
	cout << ans << endl;
}