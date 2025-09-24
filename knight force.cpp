#include<bits/stdc++.h>

using namespace std;

int n, m , k, s, i, j, t, x, y;

int main(){
	cin >> t;
	while(t--){
		cin >> n >> m >> k >> s >> x >> y;
		queue<pair<int, int>> posisi;
		int visit[n+1][m+1];
		memset(visit, 0, sizeof(visit));
		while (k--){
			cin >> i >> j;
			// posisi.push({i,j})
			// posisi.push(make_pair(i,j))
			posisi.push({i, j});
			visit[i][j] = 1;
		}
		
		bool done = 0;
		int ans = 0;
		while(!posisi.empty()){
			int sz = posisi.size();
			while(sz--){
				int a = posisi.front().first;
				int b = posisi.front().second;
				posisi.pop();
				if(a==x && b==y){
					done=1;
					break;
				}
				//(a+1, b-2)
				//(a+2, b-1)
				//(a+2, b+1)
				//(a+1, b+2)
				//(a-1, b-2)
				//(a-2, b-1)
				//(a-1, b+2)
				//(a-2, b+1)
				if(a+1<=n && a>=1 && b-2<=m && b-2>=1 && visit[a+1][b-2]==0){
					posisi.push({a+1, b-2});
					visit[a+1][b-2]=1;
				}
				if(a+2<=n && a>=1 && b-1<=m && b>=1 && visit[a+2][b-1]==0){
					posisi.push({a+2, b-1});
					visit[a+2][b-1]=1;
				}
				if(a+2<=n && a>=1 && b+1<=m && b>=1 && visit[a+2][b+1]==0){
					posisi.push({a+2, b+1});
					visit[a+2][b+1]=1;
				}
				if(a+1<=n && a>=1 && b+2<=m && b>=1 && visit[a+1][b+2]==0){
					posisi.push({a+1, b+2});
					visit[a+1][b+2]=1;
				}
				if(a<=n && a-1>=1 && b<=m && b-2>=1 && visit[a-1][b-2]==0){
					posisi.push({a-1, b-2});
					visit[a-1][b-2]=1;
				}
				if(a<=n && a-2>=1 && b<=m && b-1>=1 && visit[a-2][b-1]==0){
					posisi.push({a-2, b-1});
					visit[a-2][b-1]=1;
				}
				if(a<=n && a-1>=1 && b+2<=m && b>=1 && visit[a-1][b+2]==0){
					posisi.push({a-1, b+2});
					visit[a-1][b+2]=1;
				}
				if(a<=n && a-2>=1 && b+1<=m && b+1>=1 && visit[a-2][b+1]==0){
					posisi.push({a-2, b+1});
					visit[a-2][b+1]=1;
				}
				
			}
			if(done){
				break;
			}
			ans++;
			if(ans>s){
				break;
			}
		}
		if(done==0){
			cout << "FALSE" << endl;;
		}else{
			cout << "TRUE" << endl;
		}
	}
	
}