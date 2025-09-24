#include<iostream>
using namespace std;

bool prima(int n){
	if(n==0 || n==1){
		return false;
	}
	for(int i=2; i*i<=n; i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

int main(){
	int n; cin >> n;
	
	for(int i=4; i<=n; i++){
		if(prima(i) || prima(n-i)){
			continue;
		}else{		
			cout << i << " " << n-i << endl;
			break;
		}
	}
}