#include <bits/stdc++.h>
using namespace std;
#define int long long
#define bismillah ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

signed main() {
    bismillah
    int n;
    cin >> n;
    
    vector<pair<int, int>> gears(n);
    for (int i = 0; i < n; i++) {
        cin >> gears[i].first >> gears[i].second;
    }
    
    int m;
    cin >> m;
    vector<int> speeds(m);
    for (int i = 0; i < m; i++) {
        cin >> speeds[i];
    }
    
    // dp[i][j] - minimum gear changes to reach i-th minute using j-th gear
    vector<vector<int>> dp(m, vector<int>(n, LLONG_MAX));
    
    // Initialize the first minute
    for (int j = 0; j < n; j++) {
        if (gears[j].first <= speeds[0] && speeds[0] <= gears[j].second) {
            dp[0][j] = 0;
        }
    }
    
    // Fill DP table
    for (int i = 1; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (gears[j].first <= speeds[i] && speeds[i] <= gears[j].second) {
                for (int k = 0; k < n; k++) {
                    if (dp[i-1][k] != LLONG_MAX) {
                        dp[i][j] = min(dp[i][j], dp[i-1][k] + (j != k));
                    }
                }
            }
        }
    }
    
    // Find the minimum changes required
    int result = LLONG_MAX;
    for (int j = 0; j < n; j++) {
        result = min(result, dp[m-1][j]);
    }
    
    if (result == LLONG_MAX) {
        cout << -1 << endl;
    } else {
        cout << result << endl;
    }
    
    return 0;
}