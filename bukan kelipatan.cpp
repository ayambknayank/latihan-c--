#include<bits/stdc++.h>
using namespace std;

int a, b, c;

bool prima(int x){
	if(x==0 || x==1){
		return false;
	}
	for(int i=2; i*i<=x; i++){
		if(i%x==0){
			return false;
		}
	}
	return true;
}

int main(){
	cin >> a >> b >> c;
	for(int i=2; i<=100; i++){
		if(prima(i)){
			if(i%a!=0 && i%b!=0 && i%c!=0){
				cout << i;
				return 0;
			}
		}
	}
	return 0;
}