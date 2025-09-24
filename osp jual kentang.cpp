#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n, m;
    cin >> n >> m;
    ll a[n + 1], b[m + 1];
    double truka = 0, trukb = 0;

    for(ll i = 1; i <= n; i++) {
        cin >> a[i];
        truka += a[i];
    }
    for(ll i = 1; i <= m; i++) {
        cin >> b[i];
        trukb += b[i];
    }

    sort(b + 1, b + m + 1);

    ll tambah = 0;
    double rataA = truka / n;
    double rataB = trukb / m;

    while(rataA <= rataB) {
        if(m <= 0) {
            cout << -1 << endl;
            return 0;
        }

        ll cur = b[m];
        do {
            truka += b[m];
            trukb -= b[m];
            tambah += b[m];
            m--;
            n++;
        } while(m > 0 && b[m] == cur);

        if(m <= 0) {
            cout << -1 << endl;
            return 0;
        }

        rataA = truka / n;
        rataB = trukb / m;
    }

    cout << tambah << endl;
    return 0;
}
