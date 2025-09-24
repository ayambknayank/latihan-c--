#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> D(N-1);
    for (int i = 0; i < N-1; i++) {
        cin >> D[i];
    }

    vector<int> T(N);
    for (int i = 0; i < N; i++) {
        cin >> T[i];
    }

    vector<int> dp(N+1, INT_MAX);
    dp[0] = 0;

    for (int i = 1; i <= N; i++) {
        if (T[i-1] != -1) {
            dp[i] = min(dp[i], dp[i-1] + D[i-2] + T[i-1]);
        }
        if (i > 1) {
            dp[i] = min(dp[i], dp[i-2] + D[i-2] + D[i-3]);
        }
    }

    cout << dp[N] << endl;

    return 0;
}