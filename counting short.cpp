#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll urut[1001];

int main(){
	ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);
	ll n, x;
	cin >> n;
	memset(urut, 0, sizeof(urut));
	for(int i=0; i<n; i++){
		cin >> x;
		urut[x]++;
	}
	for(int i=1; i<1001; i++){
		while(urut[i]>0){
			cout << i << endl;
			urut[i]--;
		}
	}
	return 0;
}