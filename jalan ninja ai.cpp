#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n, m;
    cin >> n >> m;
    queue<pair<int, int>> X;
    queue<pair<int, int>> O;
    vector<vector<bool>> used(n+1, vector<bool>(m+1, false));
    vector<vector<int>> dir = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}, {-1, -1}, {-1, 1}, {1, -1}, {1, 1}};

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
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
        }
    }

    for(int i=0; i<n*m; i++){
        char p;
        cin >> p;
        if(p=='X'){
            while(true){
                int x = X.front().first;
                int y = X.front().second;
                X.pop();
                bool valid = true;
                for(auto d : dir){
                    int nx = x + d[0];
                    int ny = y + d[1];
                    if(nx >= 1 && nx <= n && ny >= 1 && ny <= m && used[nx][ny]){
                        valid = false;
                        break;
                    }
                }
                if(valid){
                    used[x][y] = true;
                    cout << x << " " << y << endl;
                    cout << flush;
                    break;
                }else{
                    X.push({x, y}); // push back to queue if not valid
                }
            }
        }else{
            while(true){
                int x = O.front().first;
                int y = O.front().second;
                O.pop();
                bool valid = true;
                for(auto d : dir){
                    int nx = x + d[0];
                    int ny = y + d[1];
                    if(nx >= 1 && nx <= n && ny >= 1 && ny <= m && used[nx][ny]){
                        valid = false;
                        break;
                    }
                }
                if(valid){
                    used[x][y] = true;
                    cout << x << " " << y << endl;
                    cout << flush;
                    break;
                }else{
                    O.push({x, y}); // push back to queue if not valid
                }
            }
        }
    }
}