#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);

const int mod = 10^9+7;

int main(){
	bismillah
	ll a, b;
	cin >> a >> b;
	ll hasil = (a*b)%mod;
	cout << hasil;
	return 0;
}