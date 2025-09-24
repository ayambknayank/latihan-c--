#include<bits/stdc++.h>
using namespace std;
#define ll long long

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
	int n, k;
	cin >> n >> k;
	cout << 2 << endl;
	int primake = 1;
	int i=3;
	int x = k+1;
	while(true){
		if(prima(i)){
			primake++;
			if(primake==x){
				cout << i << endl;
				x += k;
				n--;
			}
		}
		i++;	
		if(n==1){
			break;
		}
	}
}