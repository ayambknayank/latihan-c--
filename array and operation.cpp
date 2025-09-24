#include <bits/stdc++.h>
using namespace std;

#define dvec vector<vector<int>>
#define vec vector<int>
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

void solve(){
	int n, k;
	cin >> n >> k;
	int jml=0;
	vec a(n);
	for(int i=0; i<n; i++){
		cin >> a[i];
		//jml+=a[i];
	}
	sort(a.begin(), a.end());//, greater<int>()
//	int j=0;
//	while(k--){
//		jml+=a[1]/a[0];
//		jml-=a[1]+a[0];
//		a.erase(a.begin(), a.begin()+1);
//		a.erase(a.begin(), a.begin());
//	}
//	cout << jml << endl;

// beda lagi

//	int sama=0, tdk=0;
//	for(int i=0; i<k*2; i++){
//		cout << jml << " " << sama << " " << tdk << endl;
//		jml-=a[i];
//		if(a[i]==a[i+1] && i+1<k*2){
//			sama++;
//			i++;
//			jml-=a[i];
//		}else{
//			tdk++;
//		}
//		
//	}
//	if(sama==tdk){
//		cout << jml << endl;
//	}else{
//		cout << jml+(abs(sama-tdk)) << endl;
//	}
	
	int ans = 0;
	for(int i=0; i<n-2*k; ++i){
		ans+=a[i];
	}
	for(int i=n-2*k; i<n; ++i){
		ans+=a[i]/a[n-k];
	}
	cout << ans << endl;
	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
		cout << endl;
	}
}