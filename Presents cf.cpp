#include<bits/stdc++.h>
using namespace std;

int n, kasihke[1001];

int main(){
	cin >> n;
	for(int i=1; i<=n; i++){
		cin >> kasihke[i];
	}
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(kasihke[j]==i){
				cout << j << " ";
			}
		}
	}
	
}