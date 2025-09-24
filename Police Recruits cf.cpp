#include<bits/stdc++.h>
using namespace std;

const int maxn = 1e5 + 5;
int n, x[maxn], jahat=0, petugas=0;

int main(){
	cin >> n;
	for(int i=0; i<n;i++){
		cin >> x[i];
	}
	for(int i=0; i<n; i++){
		if(x[i]==-1){
			if(petugas==0){
				jahat++;
			}else{
				petugas--;
			}
		}else{
			petugas+=x[i];
		}
	}
	cout << jahat;
}