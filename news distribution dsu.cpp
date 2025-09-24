#include <bits/stdc++.h>
using namespace std;

#define dvec vector<vector<int>>
#define vec vector<int>
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

vector<int> parent, rankk;

int find(int v) {
    if (parent[v] == v) return v;
    return parent[v] = find(parent[v]);
}

void unite(int a, int b) {
    a = find(a);
    b = find(b);
    if (a == b) return;
    if (rankk[a] < rankk[b]) swap(a, b);
    parent[b] = a;
    rankk[a] += rankk[b];
}

int main() {
    bismillah
    int n, m;
    cin >> n >> m;
    parent.resize(n + 1);
    rankk.resize(n + 1, 1);
    for (int i = 1; i <= n; ++i) parent[i] = i;

    for (int i = 0; i < m; ++i) {
        int k;
        cin >> k;
        if (k == 0) continue; 
        vector<int> orang(k);
        for (int j = 0; j < k; ++j) cin >> orang[j];
        for (int j = 1; j < k; ++j) unite(orang[0], orang[j]);
    }
    for (int i = 1; i <= n; ++i) cout << rankk[find(i)] << " ";
    return 0;
}
