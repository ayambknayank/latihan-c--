#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	int ans = 1;
	int tabel[16][16];
	for(int i=1; i<=n; i++){
		tabel[1][i]=ans;
		ans+=i+1;
	}
	for(int i=2; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(j==1){
				tabel[i][j]=tabel[j][i];
			}else{
				tabel[i][j]=tabel[i-1][j]+tabel[i][j-1];
			}
		}
	}
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cout << tabel[i][j] << " ";
		}
		cout << endl;
	}
}