#include<bits/stdc++.h>
using namespace std;

const int maxn = 1e5 + 5;
int n, m, k, x, y;
long long a[maxn], l[maxn], r[maxn], d[maxn];

int main() {
    cin >> n >> m >> k;
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for(int i = 1; i <= m; i++) {
        cin >> l[i] >> r[i] >> d[i];
    }
    for(int i = 1; i <= k; i++) {
        cin >> x >> y;
        a[x] += y;
    }

    for(int i = 1; i <= m; i++) {
        a[l[i]] += d[i];
        a[r[i] + 1] -= d[i];
    }

    for(int i = 2; i <= n; i++) {
        a[i] += a[i - 1];
    }

    for(int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
