#include<iostream>
using namespace std;

int m, n, hitung = 0, mat[30][30];
bool visit[30][30] = {0};

void jaw(int x, int y, int klik){
	if(x>=0 && x<=m-1 && y>=0 && y<=n-1){
		if(!visit[x][y]){
			visit [x][y] = true;
			if(mat[x][y] == klik){
				hitung ++;
				jaw(x-1, y, klik);
				jaw(x+1, y, klik);
				jaw(x, y-1, klik);
				jaw(x, y+1, klik);
			}
		}
	}
}

int main(){
	cin >> m >> n;
	mat[m][n];
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cin >> mat[i][j];
		}
	}
	
	int klik, x, y;
	cin >> x >> y;
	klik = mat[x][y];
	
	jaw(x, y, klik);
	int output = hitung * (hitung-1);	
	cout << output << endl;
	
	return 0;
}