#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> W(N), C(N);
    for (int i = 0; i < N; i++) {
        cin >> W[i] >> C[i];
    }

    vector<int> dp(M + 1, 0);
    for (int i = 0; i < N; i++) {
        for (int j = M; j >= W[i]; j--) {
            dp[j] = max(dp[j], dp[j - W[i]] + C[i]);
        }
    }

    cout << dp[M] << endl;

    return 0;
}