#include<bits/stdc++.h>
using namespace std;
#define int long long

int modInverse(int a, int m) {
    int m0 = m, y = 0, x = 1;
    if (m == 1) return 0;
    while (a > 1) {
        int q = a / m;
        int t = m;
        m = a % m, a = t;
        t = y;
        y = x - q * y;
        x = t;
    }
    if (x < 0) x += m0;
    return x;
}

int kombinasi(int a, int b, int m) {
    if (b > a - b) {
        b = a - b;  // karena C(a, b) = C(a, a-b)
    }
    int result = 1;
    for (int i = 0; i < b; ++i) {
        result = (result * (a - i)) % m;
        result = (result * modInverse(i + 1, m)) % m;
    }
    return result;
}

signed main() {
    int n, k, m;
    cin >> n >> k >> m;
    int kombin = kombinasi(n, k, m) % m;
    cout << kombin;
}
