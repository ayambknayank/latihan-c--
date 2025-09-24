#include <iostream>
#include <cmath>
using namespace std;

int gcd (long long e, long long f){
	if (f==0){
		return e;
	}
	return gcd(f,e%f);
}

void jumlah(long long a, long long b, long long c, long long d){
	long long f = b*d;
	long long e = (d*a)+(b*c);
	
	long long fpb = gcd(e, f);
	
	cout << e/fpb << " " << f/fpb;
}

int main (){
	long long a, b, c, d;
	cin >> a >> b >> c >> d;
	
	jumlah(a, b, c, d);
}