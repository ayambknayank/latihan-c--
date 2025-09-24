#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);

int main(){
	bismillah
	ll n, d;
	cin >> n >> d;
	vector<ll> power(n);
	for(int i=0; i<n; i++){
		cin >> power[i];
	}
	sort(power.begin(), power.end(), greater<ll>());
	ll bermain = 0;
	ll ganti = n;
	for(int i=0; i<n; i++){
		ll tim = (power[i]+d)/power[i];
		if(tim<=ganti){
			bermain++;
			ganti-=tim;
		}else{
			break;
		}
	}
	cout << bermain << endl;
}