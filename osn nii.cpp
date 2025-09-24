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

    // dp[i] - minimum gear changes to reach i-th minute
    vector<int> dp(n, LLONG_MAX);

    // Initialize the first minute
    for (int j = 0; j < n; j++) {
        if (gears[j].first <= speeds[0] && speeds[0] <= gears[j].second) {
            dp[j] = 0;
        }
    }

    // Process subsequent minutes
    for (int i = 1; i < m; i++) {
        vector<int> new_dp(n, LLONG_MAX);
        for (int j = 0; j < n; j++) {
            if (gears[j].first <= speeds[i] && speeds[i] <= gears[j].second) {
                int min_val = LLONG_MAX;
                for (int k = 0; k < n; k++) {
                    if (dp[k] != LLONG_MAX) {
                        min_val = min(min_val, dp[k] + (j != k));
                    }
                }
                new_dp[j] = min(new_dp[j], min_val);
            }
        }
        dp = move(new_dp);
    }

    // Find the minimum changes required
    int result = *min_element(dp.begin(), dp.end());

    if (result == LLONG_MAX) {
        cout << -1 << endl;
    } else {
        cout << result << endl;
    }

    return 0;
}