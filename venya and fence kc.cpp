#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define bismillah ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);

int main(){
	int n, h;
	cin >> n >> h;
	int ans=0;
	for(int i=0; i<n; i++){
		int x; cin >>x;
		if(x>h){
			ans+=2;
		}else{
			ans++;
		}
	}
	cout << ans;
}