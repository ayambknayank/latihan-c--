#include<bits/stdc++.h>
using namespace std;

long long fn(long long n){
	if(n==1) return 1;
	return ((n+1)/2) * ((n+1)/2)+fn(n/2);
}

int main(){
	long long n;
	cin >> n;
	cout << fn(n) << endl;
}