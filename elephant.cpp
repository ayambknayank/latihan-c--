#include<iostream>
using namespace std;

int main(){
	int n; cin >> n;
	
	int hasil=0;
	if(n/5>0){
		hasil+=n/5;
		n%=5;
	}
	if(n/4>0){
		hasil+=n/4;
		n%=4;
	}
	if(n/3>0){
		hasil+=n/3;
		n%=3;
	}
	if(n/2>0){
		hasil+=n/2;
		n%=2;
	}
	if(n/1>0){
		hasil+=n/1;
		n%=1;
	}
	cout << hasil;
}