#include <bits/stdc++.h>
using namespace std;

vector<bool> cek;
vector<vector<bool>> adjmatrix;

int dfs(int now, int n){
    cek[now] = true;
    int ans = 1;
    for(int i = 1; i <= n; ++i){
        if(adjmatrix[now][i] && !cek[i]){
            ans += dfs(i, n);
        }
    }
    return ans;
}

int main(){
    int n, m;
    cin >> n >> m;
    adjmatrix.assign(n + 1, vector<bool>(n + 1, false));
    cek.assign(n + 1, false);
    for(int i = 0; i < m; ++i){
        int k;
        cin >> k;
        vector<int> orang(k);
        for(int j = 0; j < k; ++j){
            cin >> orang[j];
        }
        for (int j = 0; j < k; ++j) {
            for (int l = j + 1; l < k; ++l) {
                adjmatrix[orang[j]][orang[l]] = true;
                adjmatrix[orang[l]][orang[j]] = true;
            }
        }
    }
    for (int i = 1; i <= n; ++i) {
        cek.assign(n + 1, false);
        int total = dfs(i, n);
        cout << total << " ";
    }
}
