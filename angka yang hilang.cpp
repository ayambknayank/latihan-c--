#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	int en[n+1];
	int cek[n+1] = {0};
	
	for(int i=1; i<=n-2; i++){
		cin >> en[i];
		cek[en[i]]=1;
	}
	
	for(int i=1; i<=n; i++){
		if(!cek[i]){
			cout << i << endl;
		}
	}
}