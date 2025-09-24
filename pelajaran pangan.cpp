#include<bits/stdc++.h>
using namespace std;

int n, m;

int main(){
	ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);
	cin >> n >> m;
	int a[n+1];
	for(int i=1; i<=n; i++){
		cin >> a[i];
	}
	sort(a+1, a+n+1);
	int ans=a[1]+m-a[n];
	for(int i=2; i<=n; i++){
		ans = max(ans, a[i]-a[i-1]);
	}
	cout << m-ans;
	return 0;
}