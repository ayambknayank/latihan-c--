#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> a(n);
	int ans=0;
	for(int i=8; i<=20; i++){
			ans+=i-7;
	}
	cout << ans << endl;
//	sort(a.begin(), a.end());
//	for(int i=0; i<n; i++){
//		cout << a[i] << " ";
//	}
}