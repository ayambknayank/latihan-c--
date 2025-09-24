#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, k, low1, x, hasil=0;
	cin >> n >> k;
	
	int jarak[n+5], bebek;
	for(int i=0; i<n; i++){
		cin >> x;
		hasil+=x;
		jarak[i]=hasil;
	}
	for(int i=0; i<k; i++){
		cin >> bebek;
		low1 = upper_bound(jarak, jarak+n, bebek)-jarak;
		cout << low1 << endl;
	}
	return 0;
}