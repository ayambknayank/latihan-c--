#include<bits/stdc++.h>
using namespace std;

const int MAXN=1e5+5;
long long v[MAXN], pv[MAXN], pu[MAXN];

int main() {
    int n, m, t, l, r; 
    cin >> n;

    for(int i = 1; i <= n; i++) {
        cin >> v[i];
        pv[i] = pv[i-1] + v[i];
    }

    sort(v + 1, v + n + 1);
    for(int i = 1; i <= n; i++) {
        pu[i] = pu[i-1] + v[i];
    }
    cin >> m;
    for(int i = 1; i <= m; i++) {
        cin >> t >> l >> r;
        if(t == 1) {
            cout << pv[r] - pv[l-1] << endl;
        } else {
            cout << pu[r] - pu[l-1] << endl;
        }
    }

    return 0;
}
