#include<bits/stdc++.h>
using namespace std;

int n;

int main(){
	cin >> n;
	int x[n+1][n+1];
	for(int i=0; i<=n; i++){
		x[i][0]=1;
		for(int j=1; j<=i-1; j++){
			x[i][j]=x[i-1][j-1]+x[i-1][j];
		}
		x[i][i]=1;
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<=i; j++){
			cout << x[i][j] << " ";
		}
		cout << endl;
	}
}