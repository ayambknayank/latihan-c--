#include<bits/stdc++.h>
using namespace std;

int n, x, hasil;

bool prima(int x){
	if(x==1){
		return false;
	}
	for(int i=2; i*i<=x; i++){
		if(x%i==0){
			return false;
		}
	}
	return true;
}

int main(){
	cin >> n;
	while(n--){
		hasil=1;
		cin >> x;
		if(prima(x)){
			cout << "2" << endl;
		}else{
			for(int i=2; i<=x; i++){
				if(x%i==0){
					hasil++;
				}
			}
			cout << hasil << endl;
		}
	}
	return 0;
}