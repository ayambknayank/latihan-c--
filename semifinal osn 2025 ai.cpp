#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<pair<int,int>> data; // {nilai ganjil, jumlah kemunculan}

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if(x % 2 == 1) {
            data.push_back({x, 1});
        } else {
            int h = x, a = 1;
            while(h % 2 == 0) {
                h /= 2;
                a *= 2;
            }
            // sekarang h ganjil, a = faktor 2^m
            data.push_back({h, a});
        }
    }

    // urutkan berdasarkan nilai ganjil desc
    sort(data.begin(), data.end(), [](auto &p1, auto &p2){
        return p1.first > p2.first;
    });

    int total = 0, taken = 0;
    for(auto &p : data) {
        int val = p.first;
        int cnt = p.second;
        int ambil = min(k - taken, cnt);
        total += ambil * val;
        taken += ambil;
        if(taken == k) break;
    }

    cout << total << "\n";
    return 0;
}
