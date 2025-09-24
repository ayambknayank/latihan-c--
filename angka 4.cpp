#include<bits/stdc++.h>
using namespace std;
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

bool prima(int n){
	if(n<=1){
		return true;
	}
	for(int i=2; i*i<=n; i++){
		if(n%i==0){
			return false;;
		}
	}
	return true;
}

int main(){
	bismillah
	int a, b;
	cin >> a >> b;
	int ans = 0;
	for(int i=a; i<=b; i++){
		if(!prima(i)){
			ans++;
		}
	}
	cout << ans;
}