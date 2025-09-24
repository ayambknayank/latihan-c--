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
        for (int i=0; i<n; i++) {
            cin >> angka[i];
        }
        sort(angka.begin(), angka.end());
        int j = 0;
        for (int i = 1; i < angka.size(); i++) {
            if (angka[i] != angka[j]) {
                j++;
                angka[j] = angka[i];
            }
        }
        angka.resize(j + 1);
        
        int jml = 0, ans = 0;
        for (int i = 0; i < angka.size(); i++) {
            while(a[i] - a[pnt] >= n) {
            jml++;
        	}
            ans = max(ans, i - jml + 1);
        }
        cout << ans << endl;
    }
    return 0;
}
