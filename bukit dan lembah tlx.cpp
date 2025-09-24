#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
	int n, cur, lembah=0, bukit=0, ans=0;
	cin >> n;
	cur = n;
	while(cin >> n){
		if(n > cur){
			lembah=0;
			bukit += n-cur;
			ans = max(ans, bukit);
		}else if(n < cur){
			bukit = 0;
			lembah += cur-n;
			ans = max(ans, lembah);
		}
		cur = n;
	}
	cout << ans << endl;
}