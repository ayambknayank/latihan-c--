#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

const int MOD = 1e9;

int main() {
    bismillah
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> angka(n);
        for (int i = 0; i < n; i++) {
            cin >> angka[i];
        }
        sort(angka.begin(), angka.end());
        angka.erase(unique(angka.begin(), angka.end()), angka.end());
        int jml = 0, ans = 0;
        for (int i = 0; i < angka.size(); i++) {
            while(angka[i] - angka[jml] >= n) {
            jml++;
        	}
            ans = max(ans, i - jml + 1);
        }
        cout << ans << endl;
    }
    return 0;
}
