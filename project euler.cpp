#include<bits/stdc++.h>
using namespace std;

int main(){
	long long hasil1=0;
	for(long long i=1; i<=100; i++){
		hasil1+=i*i;
	}
	
	long long hasil2=0;
	for(long long i=1; i<=100; i++){
		hasil2+=i;
	}
	hasil2*=hasil2;
	
	long long akhir;
	akhir = hasil2-hasil1;
	cout << akhir;
}