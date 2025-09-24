#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);

int main(){
	int n, x, z;
	cin >> n >> x >> z;
	ll diskon = (n/100)*x;
	ll pajak = ((n-diskon)/100)*z;
	
	cout << n-diskon+pajak;
}