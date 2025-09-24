#include<bits/stdc++.h>
using namespace std;
#define ll long long

int pindah=0, n, m;
double truka=0, trukb=0; 

double rata(double jml, double banyak){
    return jml / banyak;
}

int main(){
    cin >> n >> m;
//    vector<double> a(n);
//    vector<double> b(m);
	ll a[n], b[m];
    for(ll i=1; i<=n; i++){
        cin >> a[i];
        truka+=a[i];
    }
    for(ll i=1; i<=m; i++){
        cin >> b[i];
        trukb+=b[i];
    }
    ll awal = truka;
    ll tambah=0;
    sort(b+1, b+m+1);
    double rataA = ((double)truka)/n;
	double rataB = ((double)trukb)/m;
    while(rataA <= rataB){
    	if(m<=0){
        	cout << -1 << endl;
        	return 0;
		}
		ll cur = b[m];
		do {
			truka += b[m];
			trukb -= b[m];
			tambah += b[m];
			m--;
			n++;
		} while (m>0 && b[m] == cur);
		if(m<=0){
        	cout << -1 << endl;
        	return 0;
		}
		double rataA = rata(truka, n);
    	double rataB = rata(trukb, m);
    }
    cout << tambah << endl;
//    cout << truka << endl;
//    cout << trukb << endl;
//    cout << rata(truka, n) << endl;
//    cout << rata(trukb, m) << endl;
    return 0;
}
