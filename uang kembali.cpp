#include <iostream>
#include <vector>
#include <limits>
using namespace std;

int findMinCoins(vector<int>& coins, int target) {
    int n = coins.size();
    vector<int> dp(target + 1, numeric_limits<int>::max());
    dp[0] = 0;

    for (int i = 1; i <= target; i++) {
        for (int j = 0; j < n; j++) {
            if (coins[j] <= i && dp[i - coins[j]] != numeric_limits<int>::max()) {
                dp[i] = min(dp[i], dp[i - coins[j]] + 1);
            }
        }
    }

    return dp[target] == numeric_limits<int>::max() ? -1 : dp[target];
}

int main() {
    int N;
    cin >> N;

    vector<int> coins(N);
    for (int i = 0; i < N; i++) {
        cin >> coins[i];
    }

    int K;
    cin >> K;

    int minCoins = findMinCoins(coins, K);

    cout << minCoins << endl;

    return 0;
}
