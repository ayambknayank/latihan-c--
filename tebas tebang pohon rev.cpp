#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int n, m;
	cin >> n >> m;
	if(n<m){
		swap(n, m);
	}
	int ans=0;
	for(int i=1; i<n; i++){
		ans+=i;
	}for(int i=0; i<m; i++){
		ans+=n+i*2;
	}
	cout << ans;
}