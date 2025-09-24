#include<bits/stdc++.h>
using namespace std;

int fpb(long long a, long long b){
	if (b==0){
		return a;
	}
	return fpb(b, a%b);
}

long long lcm(long long x, long long y){
	int gcd = fpb(x,y);
	return x*y/gcd;
}

long long q,n,x,y, nilaiX, nilaiY;

int main(){
	cin >> q;
	while(q--){
		cin >> n >> x >> y;
		long long kpk = lcm(x, y);
		
		nilaiX = (n/x) -  (n/kpk);
		nilaiY = (n/y) - (n/kpk);
		
		cout << nilaiX << " " << nilaiY << endl;
	}
}