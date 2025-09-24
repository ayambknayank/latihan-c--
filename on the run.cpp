#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int min(int a, int b, int c) {
    return min(min(a, b), c);
}

int operasi(const string &s1, const string &s2) {
    int m = s1.length();
    int n = s2.length();

    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

    for (int i = 0; i <= m; ++i) {
        for (int j = 0; j <= n; ++j) {
            if (i == 0) {
                dp[i][j] = j;
            } else if (j == 0) {
                dp[i][j] = i;
            } else if (s1[i - 1] == s2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1];
            } else {
                dp[i][j] = 1 + min(dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]);
            }
        }
    }

    return dp[m][n];
}

int main() {
    string s1, s2;

    getline(cin, s1);

    getline(cin, s2);

    int minimal = operasi(s1, s2);
    cout << minimal << endl;

    return 0;
}
