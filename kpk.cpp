#include <iostream>
#include <cmath>
using namespace std;

int fpb(int a, int b){
	if (b==0){
		return a;
	}
	return fpb(b, a%b);
}

int kpk(int a, int b){
	int gcd = fpb(a,b);
	return a*b/gcd;
}

int main(){
	int n;
	cin >> n;
	int d[n];
	for (int i=0; i<n; i++){
		
		cin >> d[i];	
	}
	
	int hasil = d[0];
	for (int j=1; j<n; j++){
		hasil = kpk(hasil, d[j]);
		
	}
	cout <<  hasil << endl;
	return 0;
}