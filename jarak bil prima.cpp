#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);

bool prima(int n){
	if(n==1){
		return false;
	}
	for(int i=2; i*i<=n; i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

int main(){
	ll k;
	cin >> k;
//	ll ganti = k;
//	for(int i=k; i>=1; i--){
//		if(prima(i) && k-i>=0){
//			cout << i << " ";
//			k-=i;
//		}
//		if(k==0){
//			break;
//		}
//	}
//	return 0;
cout << k;
}