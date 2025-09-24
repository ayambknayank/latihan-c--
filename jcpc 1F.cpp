#include <bits/stdc++.h>
using namespace std;

#define int long long

vector<int> myData;

int XORR(int a, int b) {
    return a ^ b;
}

void tipe1(int x, int y) {
    myData.resize(myData.size() + x, y);
}

void tipe2(int x) {
    if (x > myData.size()) {
        x = myData.size();
    }
    myData.resize(myData.size() - x);
}

void tipe3(int l, int r, int x, int y) {
    if (l < 0) l = 0;
    if (r >= myData.size()) r = myData.size() - 1;
    int ans = 0;
    for (int i = l; i <= r; i++) {
        int hasil = XORR(x, myData[i]);
        if (hasil <= y) {
            ans++;
        }
    }
    cout << ans << endl;
}

signed main() {
    int q;
    cin >> q;
    while (q--) {
        int n;
        cin >> n;
        if (n == 1) {
            int x, y;
            cin >> x >> y;
            tipe1(x, y);
        } else if (n == 2) {
            int x;
            cin >> x;
            tipe2(x);
        } else if (n == 3) {
            int l, r, x, y;
            cin >> l >> r >> x >> y;
            tipe3(l, r, x, y);
        }
    }
    return 0;
}
