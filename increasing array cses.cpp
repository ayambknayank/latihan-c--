#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

const int modu = 1e9+7;

int main(){
	int n;
	cin >> n;
	int angka[n];
	for(int i=0; i<n; i++){
		cin >> angka[i];
	}
	ll total=0;
	for(int i=0; i<n-1; i++){
		if(angka[i]>angka[i+1]){
			total += angka[i]-angka[i+1];
			angka[i+1]=angka[i];
		}
	}
	cout << total;
}