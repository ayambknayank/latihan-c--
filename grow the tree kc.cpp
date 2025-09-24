#include <bits/stdc++.h>
using namespace std;

#define int long long
#define bismillah ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);

signed main(){
	int n; cin >> n;
	int pohon[n+1];
	for(int i=0; i<n; i++){
		cin >> pohon[i];
	}
	sort(pohon, pohon+n);
	int j=n-1;
	int k=0;
	int x=0, y=0;
	for(int i=0; i<n; i++){
		if(i%2==0){
			x+=pohon[j];
			j--;
		}else{
			y+=pohon[k];
			k++;
		}
	}
	//cout << x << " " << y << endl;
	int ans = (x*x)+(y*y);
	cout << ans;
}