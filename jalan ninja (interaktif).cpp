#include<bits/stdc++.h>
using namespace std;
#define int long long

/*
O X O X
X O X O
X O X O 
O X O X

atau

O O X X O
X X O O X
O O X X O
X X O O X

O O X
X X O

*/

signed main(){
	int n, m;
	cin >> n >> m;
	queue<pair<int, int>> X;
	queue<pair<int, int>> O;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			if(n%2==0){
				if(i%2==1){
					if(j%4==1 || j%4==2){
						O.push({i, j});
					}else{
						X.push({i, j});
					}
				}else{
					if(j%4==1 || j%4==2){
						X.push({i, j});
					}else{
						O.push({i, j});
					}
				}
			}else{
				if(j%2==0){
					if(i%4==1 || i%4==2){
						X.push({i, j});
					}else{
						O.push({i, j});
					}
				}else{
					if(i%4==1 || i%4==2){
						O.push({i, j});
					}else{
						X.push({i, j});
					}
				}
			}
			
		}
	}
	for(int i=1; i<=n*m; i++){
		char p;
		cin >> p;
		if(p=='X'){
			cout << X.front().first << " " << X.front().second << endl;
			X.pop();
		}else if(p=='O'){
			cout << O.front().first << " " << O.front().second << endl;
			O.pop();
		}
	}
	return 0;
}