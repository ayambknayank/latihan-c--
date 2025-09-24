#include <bits/stdc++.h>
using namespace std;

#define dvec vector<vector<int>>
#define vec vector<int>
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int main(){
	bismillah
	int n; cin >> n;
	int ans = 0;
	for(int i=0; i<n; i++){
		int x; cin >> x;
		if(n%2==0 && i%2==1){
			ans+=x;
		}else if(n%2==1 && i%2==0){
			ans+=x;
		}
	}
	cout << ans;
}