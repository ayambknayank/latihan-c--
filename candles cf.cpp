#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int l = 0, r = n - 1;
        int suml = a[0], sumr = a[n - 1];
        int ans = 0;

        while (l < r) {
            if (suml == sumr) {
                ans = max(ans, l + 1 + n - r);
            }

            if (suml <= sumr) {
                l++;
                suml += a[l];
            } else {
                r--;
                sumr += a[r];
            }
        }

        cout << ans << endl;
    }

    return 0;
}
