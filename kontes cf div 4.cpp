#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);

void ans(){
	int a1, a2, b1, b2;
	int ans=0;
	cin >> a1 >> a2 >> b1 >> b2;
	if(a1>b1 && a2>b2){
		ans++;
	}
	if(a1>b2 && a2>b1){
		ans++;
	}
	if(a2>b1 && a1>b2){
		ans++;
	}
	if(a2>b2 && a1>b1){
		ans++;
	}
	cout << ans << endl;
}

int main(){
	bismillah
	int n;cin >> n;
	while(n--){
		ans();
	}
}