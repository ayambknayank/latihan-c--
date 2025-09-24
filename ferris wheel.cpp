#include <bits/stdc++.h>
using namespace std;

#define dvec vector<vector<int>>
#define vec vector<int>
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int main(){
	bismillah
	int n, x;
	cin >> n >> x;
	vec p(n);
	int ans=0;
	for(int i=0; i<n; ++i){
		cin >> p[i];
	}
	sort(p.begin(), p.end());
	int kanan=n-1, kiri=0;
	while(kiri<=kanan){
		if(p[kiri]+p[kanan] <= x){
			kiri++;
			kanan--;
		}else{
			kanan--;
		}
		ans++;
	} 
	cout << ans << endl;
}