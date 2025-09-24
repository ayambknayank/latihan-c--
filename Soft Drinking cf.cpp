#include<bits/stdc++.h>
using namespace std;

int n, k, l, c, d, p, nl;
int np, ml, roti, garam, waktu;

int main(){
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	ml = k*l;
	roti = ml/nl;
	waktu = c*d;
	garam = p/np;
	cout << min(min(roti, waktu), garam)/n << endl;
}