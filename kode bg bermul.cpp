#include<bits/stdc++.h>
using namespace std;

int pindah=0;
double truka=0, trukb=0, n, m; 

double rata(double jml, double banyak){
    return jml / banyak;
}

int main(){
    cin >> n >> m;
	for (int i=1;i<=n;i++) {
		cin >> arr1[i];
		sum1 += arr1[i];
	}
	for (int i=1;i<=m;i++) {
		cin >> arr2[i];
		sum2 += arr2[i];
	}
	ll szA = n;
	ll szB = m;
	sort(arr2+1,arr2+1+m);
	double rtA = ((double)sum1)/szA;
	double rtB = ((double)sum2)/szB;
	ll ans = 0;
	while (rtA<=rtB) {
		if (szB<=0) {
			cout << -1 << endl;
			return 0;
		}
		ll cur = arr2[szB];
		do {
			sum1 += arr2[szB];
			sum2 -= arr2[szB];
			ans += arr2[szB];
			szB--;
			szA++;
		} while (szB>0 && arr2[szB] == cur);
		if (szB<=0) {
			cout << -1 << endl;
			return 0;
		}
		rtA = ((double)sum1)/szA;
		rtB = ((double)sum2)/szB;
	}
	cout << ans << endl;
}
