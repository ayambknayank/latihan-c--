#include<bits/stdc++.h>
using namespace std;

long n, hasil;

int main(){
	cin >> n;
	while(n>0){
		if(n/100>0){
		hasil+=n/100;
		n%=100;
	}else if(n/20>0){
		hasil+=n/20;
		n%=20;
	}else if(n/10>0){
		hasil+=n/10;
		n%=10;
	}else if(n/5>0){
		hasil+=n/5;
		n%=5;
	}else{
		hasil+=n;
		n-=n;
	}
	}
	cout << hasil;
}