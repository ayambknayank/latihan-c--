#include<bits/stdc++.h>
using namespace std;

int n, m;

bool ganjil(int n){
	if(n%2==0){
		return false;
	}
	return true;
}

int main(){
	cin >> n >> m;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			if(i%2==1){
				cout << "#";
			}else{
				if(ganjil(i/2) && j==m){
					cout << "#";
				}else if(!ganjil(i/2) && j==1){
					cout << "#";
				}else{
					cout << ".";
				}
			}
		}
		cout << endl;
	}
}