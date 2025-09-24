#include<bits/stdc++.h>
using namespace std;

int n, j, f=0;

int erato(int n){
	bool eliminasi[n+1]={false};
	int prima[n] = {0};
	for(int i=2; i<=n; i++){
		if(!eliminasi[i]){
			prima[f]=i;
			f++;
			j=i*i;
			while(j<=n){
				eliminasi[j]=true;
				j+=i;
			}
		}
	}
	for(int i=0; i<f; i++){
		return prima[i];
	}
}

int main(){
	cin >> n;
	cout << erato(n);
	
	return 0;
}