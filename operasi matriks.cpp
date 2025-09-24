#iinclude<bits/stdc++.h
using namespace std;

int matrik[100][100];

void horizontal(){
	
}

int main(){
	int n, m, x;
	cin >> n >> m >> x;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			int x; cin >> x;
			matrik[i][j]==x;
		}
	}
	for(int i=0; i<x; i++){
		string s;
		cin >> s;
		if(s=="_"){
			horizontal();
		}else if(s=="|"){
			vertikal();
		}else if(s=="90"){
			rotasi(90);
		}else if(s=="180"){
			rotasi(180);
		}else{
			rotasi(270);
		}
	}
}