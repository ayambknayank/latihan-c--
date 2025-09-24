#include<iostream>
#include <cmath>
using namespace std;

int gcd(int n, int f){
	if(f==0) return n;
	else return gcd(f, n%f);
}

int main(){
	int n, m, h;
	cin >> n >> m >> h;
	
	int fpb = gcd(m, h);
	int hasil;
	if(fpb==1){
		hasil = m+h;
	}else{
		hasil = (m/fpb)+(h/fpb);
	}
	
	cout << hasil;
	
	return 0;
}