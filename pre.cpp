#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, k, q;
    cin >> n >> k >> q;

    vector<pair<int, int>> recipes(n);

    for (int i = 0; i < n; ++i) {
        cin >> recipes[i].first >> recipes[i].second;
    }

    sort(recipes.begin(), recipes.end());

    vector<int> prefix_sum(n + 1, 0);

    for (int i = 1; i <= n; ++i) {
        prefix_sum[i] = prefix_sum[i - 1] + 1;
    }

    for (int i = 0; i < n; ++i) {
        prefix_sum[i + 1] -= (recipes[i].second < recipes[i].first);
    }

    for (int i = 1; i <= n; ++i) {
        prefix_sum[i] += prefix_sum[i - 1];
    }

    for (int i = 0; i < q; ++i) {
        int a, b;
        cin >> a >> b;

        int low = lower_bound(recipes.begin(), recipes.end(), make_pair(a, 0)) - recipes.begin();
        int high = upper_bound(recipes.begin(), recipes.end(), make_pair(b, 0)) - recipes.begin();

        int ans = prefix_sum[high] - prefix_sum[low];
        cout << max(0, ans - k + 1) << endl;
    }

    return 0;
}
