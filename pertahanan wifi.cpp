#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	vector<long long> kamar(n);
	for(int i=0; i<n; i++){
		cin >> kamar[i];
	}
	sort (kamar.begin(), kamar.end());
	if(n==m){
		cout << abs(kamar[n-1]-kamar[0]);
	}else{
		long long terbesar = 1e9;
		for(int i=0; i<n;  i++){
			if(m+i<=n){
				long long jadi = abs(kamar[i]-kamar[m+i-1]);
				terbesar = min(terbesar, jadi);
			}
		}
		cout << terbesar << endl;
	}
}