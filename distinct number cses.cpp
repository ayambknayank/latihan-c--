#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);
 
const int MAX_SIZE = 1000000000;
 
int main(){
	bismillah
	int n; cin >> n;
	unordered_set<int> angka;
	ll beda=1;
	vector<ll> x(n);
	for(int i=0; i<n; i++){
		cin >> x[i];
	}
	sort(x.begin(), x.end());
	for(int i=0; i<n-1; i++){
		if(x[i]!=x[i+1]){
			beda++;
		}
	}
	cout << beda;
}
