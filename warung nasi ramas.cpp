#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n, m, k, a, b;
	cin >> n >> m >> k >> a >> b;
	
	ll batas = n/(m*3);
	ll batasA = a/(2*k);
	ll batasB = b/k;
	ll hasil = min(batas, min(batasA, batasB));
	
	cout << hasil*3;
}