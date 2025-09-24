#include <bits/stdc++.h>
using namespace std;
#define dvec vector<vector<int>>
#define vec vector<int>
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int main() {
    bismillah
    int n, p, q;
    cin >> n >> p >> q;
    pair<int, int> e[n]; 
    int aseli[n];
    int memo[n]; 
    priority_queue<pair<int, int>> y;
    for(int i = 0; i < n; i++) {
        cin >> e[i].first;
        e[i].second = i;
    }
    sort(e, e + n);
    for(int i = 0; i < n; i++) {
        aseli[e[i].second] = i;
    }
    int r = 1;
    for(int l = 0; l < n; l++) {
        while(r < n && e[r].first - e[l].first <= p) {
            r++;
        }
        r--;
        y.push({r - l + 1, r});
        while(!y.empty() && y.top().second < l) {
            y.pop();
        }
        memo[l] = y.empty() ? 0 : y.top().first;
    }
    
    for(int i = 0; i < q; i++) {
        int w;
        cin >> w;
        cout << memo[aseli[w - 1]] << endl;	
    }

    return 0;
}
