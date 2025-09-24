#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int main() {
    bismillah
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n), b(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        for (int i = 0; i < n; ++i)
            cin >> b[i];

        long long totalSum = 0;
        for (int i = 0; i < n; ++i)
            totalSum += a[i] + b[i];

        cout << totalSum - *max_element(b.begin(), b.end()) << endl;
    }

    return 0;
}
