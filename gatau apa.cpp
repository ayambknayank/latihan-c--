#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    sort(a.begin(), a.end());
    a.push_back(2e9);
    
    int j = 0, ans = 0;
    for (int i = 0; i < n; i++) {
        while (j < n && a[j] == a[i]) {
            j++;
        }
        if (a[j] - a[i] > k) {
            ans++;
        }
    }
    
    cout << ans;
}
