#include<bits/stdc++.h>
using namespace std;

bool prima(long long n){
	if(n==1){
		return 0;
	}
	for(long long i=2; i*i<=n; i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

int main(){
	long long n;
	cin >> n;
	if(prima(n)){
		cout << "ya";
	}else{
		cout << "bukan";
	}
}