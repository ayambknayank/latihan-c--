#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
	int n, k, x;
	cin >> n >> k >> x;
	if(n*k*-1<= x && n*k >= x){
		cout << "YA";
	}else{
		cout << "TIDAK";
	}
}