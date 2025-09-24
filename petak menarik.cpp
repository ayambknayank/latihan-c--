#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);

int kolom, baris, k, papan[1001][1001];

int main(){
	bismillah
	cin >> kolom >> baris >> k;
	for(int i=0; i<kolom+2; i++){
		 for(int j=0; j<baris+2; j++){
			papan[i][j]=1;
		}
	}
	
	for(int i=1; i<=kolom; i++){
		 for(int j=1; j<=baris; j++){
			cin >> papan[i][j];
		}
	}
	int hasil, n=0, m=0;
	bool cek = false;
	for(int j=1; j<=baris; j++){
		for(int i=1; i<=kolom; i++){
			if(papan[i][j+1]*papan[i][j-1]*papan[i+1][j]*papan[i-1][j]==k){
		 		n=i;
		 		m=j;
		 		cek = true;
		 		break;
			}
		}
		if(cek)break;
	}
	cout << n << " " << m << endl;
}