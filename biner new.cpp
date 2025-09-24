#include<bits/stdc++.h>
using namespace std;

string biner(int n){
	string p = "1";
	string o = "0";
	if(n==1){
		return p;
	}else if(n%2==1){
		return biner(n/2) + p;
	}else {
		return biner(n/2) + o;
	}
}

int main(){
	int f;
	cin >> f;
	
	cout << biner(f);
}